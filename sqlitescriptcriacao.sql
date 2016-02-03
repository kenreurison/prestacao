CREATE TABLE db_colaborador (
	pk_colaborador	INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT, 
	col_nome INTEGER
);
create table db_transferencia(
	col_descricao TEXT,
	col_comentarios TEXT,
	pk_transferencia INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT, 
	fk_colaborador_out INTEGER,
	fk_colaborador_in INTEGER,
	fk_detalhes INTEGER,
	FOREIGN KEY (fk_detalhes) REFERENCES db_opcao(pk_detalhes),
	FOREIGN KEY(fk_colaborador_out, fk_colaborador_in) REFERENCES db_colaborador(pk_colaborador, pk_colaborador)
);
CREATE TABLE db_detalhes (
	pk_detalhes INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,
	col_parcelamento INTEGER,
	col_valor_total FLOAT,
	col_data_vencimento INTEGER,
	col_data_cartao TEXT,
	fk_transferencia INTEGER,
	FOREIGN KEY(fk_transferencia) REFERENCES db_transferencia(pf_transferencia)
);
