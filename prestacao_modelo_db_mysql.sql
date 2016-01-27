-- MySQL Workbench Forward Engineering

SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0;
SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0;
SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='TRADITIONAL,ALLOW_INVALID_DATES';

-- -----------------------------------------------------
-- Schema mydb
-- -----------------------------------------------------

-- -----------------------------------------------------
-- Schema mydb
-- -----------------------------------------------------
CREATE SCHEMA IF NOT EXISTS `mydb` DEFAULT CHARACTER SET utf8 COLLATE utf8_general_ci ;
USE `mydb` ;

-- -----------------------------------------------------
-- Table `mydb`.`tb_colaborador`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `mydb`.`tb_colaborador` (
  `idtb_colaborador` INT NOT NULL COMMENT '',
  `col_nome` VARCHAR(45) NULL COMMENT '',
  PRIMARY KEY (`idtb_colaborador`)  COMMENT '')
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `mydb`.`tb_emprestimo`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `mydb`.`tb_emprestimo` (
  `idtb_emprestimo` INT NOT NULL COMMENT '',
  `col_valor` DOUBLE NOT NULL COMMENT '',
  `col_data` DATE NOT NULL COMMENT '',
  `col_descricao` VARCHAR(45) NOT NULL COMMENT '',
  `col_comentario` TEXT NULL COMMENT '',
  `fk_fincanciador_idtb_colaborador` INT NOT NULL COMMENT '',
  `tb_recebedor_idtb_colaborador1` INT NOT NULL COMMENT '',
  PRIMARY KEY (`idtb_emprestimo`)  COMMENT '',
  INDEX `fk_tb_emprestimo_tb_colaborador_idx` (`fk_fincanciador_idtb_colaborador` ASC)  COMMENT '',
  INDEX `fk_tb_emprestimo_tb_colaborador1_idx` (`tb_recebedor_idtb_colaborador1` ASC)  COMMENT '',
  CONSTRAINT `fk_tb_emprestimo_tb_colaborador`
    FOREIGN KEY (`fk_fincanciador_idtb_colaborador`)
    REFERENCES `mydb`.`tb_colaborador` (`idtb_colaborador`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_tb_emprestimo_tb_colaborador1`
    FOREIGN KEY (`tb_recebedor_idtb_colaborador1`)
    REFERENCES `mydb`.`tb_colaborador` (`idtb_colaborador`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


SET SQL_MODE=@OLD_SQL_MODE;
SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS;
SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS;
