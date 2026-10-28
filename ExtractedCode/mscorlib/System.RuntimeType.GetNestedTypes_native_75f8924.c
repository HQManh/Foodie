// rea decompile_all
// name: thunk_FUN_03f6dc34
// address: 0x75f8924
// body: available
// range: 0x75f8924-0x75f8927 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 thunk_FUN_03f6dc34(long param_1,long param_2,uint param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  uint uVar9;
  long *plVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  byte bStack_d0;
  undefined7 uStack_cf;
  long *plStack_c8;
  long *plStack_c0;
  byte bStack_b8;
  undefined7 uStack_b7;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  undefined1 auStack_88 [16];
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  undefined8 uStack_58;
  
  lVar2 = *(long *)(param_1 + 0x10);
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_e8 = 0;
  uVar9 = *(uint *)(lVar2 + 8);
  if ((uVar9 >> 0x1d & 1) != 0) {
    uVar5 = FUN_03f8fda8();
    goto LAB_03f6e2c4;
  }
  if (param_2 == 0) {
LAB_03f6dcb8:
    if (((param_3 & 0x30) == 0) || ((uVar9 >> 0x1d & 1) != 0)) {
      lVar2 = FUN_03f984c8(DAT_095354c0,0);
    }
    else {
      lVar2 = FUN_03fbe574(lVar2,1);
      if (*(long *)(lVar2 + 0x60) != 0) {
        lVar2 = FUN_03fb4784();
      }
      plStack_a0 = (long *)0x0;
      plStack_98 = (long *)0x0;
      plStack_90 = (long *)0x0;
      plStack_78 = (long *)0x0;
      while (lVar3 = FUN_03fbf060(lVar2,&plStack_78), plVar1 = plStack_98, plVar7 = plStack_a0,
            lVar3 != 0) {
        uVar9 = 0x10;
        if ((*(uint *)(lVar3 + 0x118) & 7) != 2) {
          uVar9 = 0x20;
        }
        if ((uVar9 & param_3) != 0) {
          if (plStack_98 < plStack_90) {
            *plStack_98 = lVar3;
            plStack_98 = plStack_98 + 1;
          }
          else {
            lVar11 = (long)plStack_98 - (long)plStack_a0 >> 3;
            uVar4 = lVar11 + 1;
            if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5fa4c(&plStack_a0);
            }
            uVar8 = (long)plStack_90 - (long)plStack_a0 >> 2;
            if (uVar8 <= uVar4) {
              uVar8 = uVar4;
            }
            if (0x7ffffffffffffff7 < (ulong)((long)plStack_90 - (long)plStack_a0)) {
              uVar8 = 0x1fffffffffffffff;
            }
            if (uVar8 == 0) {
              auVar12 = ZEXT816(0);
            }
            else {
              auVar12 = FUN_03f695c0(&plStack_90);
            }
            plVar7 = (long *)(auVar12._0_8_ + lVar11 * 8);
            plVar10 = plVar7 + 1;
            *plVar7 = lVar3;
            plVar1 = plStack_98;
            while (plStack_98 != plStack_a0) {
              plStack_98 = plStack_98 + -1;
              plVar7 = plVar7 + -1;
              *plVar7 = *plStack_98;
              plVar1 = plStack_a0;
            }
            plStack_90 = (long *)(auVar12._0_8_ + auVar12._8_8_ * 8);
            plStack_a0 = plVar7;
            plStack_98 = plVar10;
            if (plVar1 != (long *)0x0) {
              operator_delete(plVar1);
              plStack_98 = plVar10;
            }
          }
        }
      }
      uVar4 = (long)plStack_98 - (long)plStack_a0 >> 3;
      lVar2 = FUN_03f984c8(DAT_095354c0,uVar4);
      if (plVar1 != plVar7) {
        uVar8 = 0;
        puVar6 = (undefined8 *)(lVar2 + 0x20);
        if (uVar4 < 2) {
          uVar4 = 1;
        }
        do {
          uVar5 = FUN_03f9ab74(plStack_a0[uVar8] + 0x20);
          *puVar6 = uVar5;
          FUN_03f5d7b8(puVar6);
          uVar8 = uVar8 + 1;
          puVar6 = puVar6 + 1;
        } while (uVar4 != uVar8);
      }
      if (plStack_a0 != (long *)0x0) {
        plStack_98 = plStack_a0;
        plStack_a8 = plStack_a0;
        goto LAB_03f6e284;
      }
    }
  }
  else {
    lVar2 = FUN_03f967b4(param_2);
    if (lVar2 == 0) {
      lVar2 = *(long *)(param_1 + 0x10);
      uVar9 = *(uint *)(lVar2 + 8);
      goto LAB_03f6dcb8;
    }
    if ((param_3 & 1) == 0) {
      FUN_03f926e8(&bStack_d0,lVar2 + 0x14);
      if ((bStack_d0 & 1) == 0) {
        plStack_a0 = (long *)CONCAT71(uStack_cf,bStack_d0);
        plStack_98 = plStack_c8;
        plStack_90 = plStack_c0;
      }
      else {
        FUN_03f5d0a4(&plStack_a0,plStack_c0,plStack_c8);
      }
      if (((param_3 & 0x30) == 0) || ((*(uint *)(*(long *)(param_1 + 0x10) + 8) >> 0x1d & 1) != 0))
      {
        lVar2 = FUN_03f984c8(DAT_095354c0,0);
      }
      else {
        lVar2 = FUN_03fbe574(*(long *)(param_1 + 0x10),1);
        if (*(long *)(lVar2 + 0x60) != 0) {
          lVar2 = FUN_03fb4784();
        }
        plStack_78 = (long *)0x0;
        plStack_70 = (long *)0x0;
        plStack_68 = (long *)0x0;
        uStack_58 = 0;
        while (lVar3 = FUN_03fbf060(lVar2,&uStack_58), plVar1 = plStack_70, plVar7 = plStack_78,
              lVar3 != 0) {
          uVar9 = 0x10;
          if ((*(uint *)(lVar3 + 0x118) & 7) != 2) {
            uVar9 = 0x20;
          }
          if (((uVar9 & param_3) != 0) &&
             (uVar4 = FUN_03f947a4(auStack_88,&plStack_a0,*(undefined8 *)(lVar3 + 0x10)),
             (uVar4 & 1) != 0)) {
            if (plStack_70 < plStack_68) {
              *plStack_70 = lVar3;
              plStack_70 = plStack_70 + 1;
            }
            else {
              lVar11 = (long)plStack_70 - (long)plStack_78 >> 3;
              uVar4 = lVar11 + 1;
              if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5fa4c(&plStack_78);
              }
              uVar8 = (long)plStack_68 - (long)plStack_78 >> 2;
              if (uVar8 <= uVar4) {
                uVar8 = uVar4;
              }
              if (0x7ffffffffffffff7 < (ulong)((long)plStack_68 - (long)plStack_78)) {
                uVar8 = 0x1fffffffffffffff;
              }
              if (uVar8 == 0) {
                auVar12 = ZEXT816(0);
              }
              else {
                auVar12 = FUN_03f695c0(&plStack_68);
              }
              plVar7 = (long *)(auVar12._0_8_ + lVar11 * 8);
              plVar10 = plVar7 + 1;
              *plVar7 = lVar3;
              plVar1 = plStack_70;
              while (plStack_70 != plStack_78) {
                plStack_70 = plStack_70 + -1;
                plVar7 = plVar7 + -1;
                *plVar7 = *plStack_70;
                plVar1 = plStack_78;
              }
              plStack_68 = (long *)(auVar12._0_8_ + auVar12._8_8_ * 8);
              plStack_78 = plVar7;
              plStack_70 = plVar10;
              if (plVar1 != (long *)0x0) {
                operator_delete(plVar1);
                plStack_70 = plVar10;
              }
            }
          }
        }
        uVar4 = (long)plStack_70 - (long)plStack_78 >> 3;
        lVar2 = FUN_03f984c8(DAT_095354c0,uVar4);
        if (plVar1 != plVar7) {
          uVar8 = 0;
          puVar6 = (undefined8 *)(lVar2 + 0x20);
          if (uVar4 < 2) {
            uVar4 = 1;
          }
          do {
            uVar5 = FUN_03f9ab74(plStack_78[uVar8] + 0x20);
            *puVar6 = uVar5;
            FUN_03f5d7b8(puVar6);
            uVar8 = uVar8 + 1;
            puVar6 = puVar6 + 1;
          } while (uVar4 != uVar8);
        }
        if (plStack_78 != (long *)0x0) {
          plStack_70 = plStack_78;
          operator_delete(plStack_78);
        }
      }
      if (((ulong)plStack_a0 & 1) != 0) {
        operator_delete(plStack_90);
      }
      plStack_a8 = plStack_c0;
      if ((bStack_d0 & 1) == 0) goto LAB_03f6e288;
LAB_03f6e284:
      operator_delete(plStack_a8);
    }
    else {
      FUN_03f926e8(&bStack_b8,lVar2 + 0x14);
      if ((bStack_b8 & 1) == 0) {
        plStack_a0 = (long *)CONCAT71(uStack_b7,bStack_b8);
        plStack_98 = plStack_b0;
        plStack_90 = plStack_a8;
      }
      else {
        FUN_03f5d0a4(&plStack_a0,plStack_a8,plStack_b0);
      }
      if (((param_3 & 0x30) == 0) || ((*(uint *)(*(long *)(param_1 + 0x10) + 8) >> 0x1d & 1) != 0))
      {
        lVar2 = FUN_03f984c8(DAT_095354c0,0);
      }
      else {
        lVar2 = FUN_03fbe574(*(long *)(param_1 + 0x10),1);
        if (*(long *)(lVar2 + 0x60) != 0) {
          lVar2 = FUN_03fb4784();
        }
        plStack_78 = (long *)0x0;
        plStack_70 = (long *)0x0;
        plStack_68 = (long *)0x0;
        uStack_58 = 0;
        while (lVar3 = FUN_03fbf060(lVar2,&uStack_58), plVar1 = plStack_70, plVar7 = plStack_78,
              lVar3 != 0) {
          uVar9 = 0x10;
          if ((*(uint *)(lVar3 + 0x118) & 7) != 2) {
            uVar9 = 0x20;
          }
          if (((uVar9 & param_3) != 0) &&
             (uVar4 = FUN_03f9492c(auStack_88,&plStack_a0,*(undefined8 *)(lVar3 + 0x10)),
             (uVar4 & 1) != 0)) {
            if (plStack_70 < plStack_68) {
              *plStack_70 = lVar3;
              plStack_70 = plStack_70 + 1;
            }
            else {
              lVar11 = (long)plStack_70 - (long)plStack_78 >> 3;
              uVar4 = lVar11 + 1;
              if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5fa4c(&plStack_78);
              }
              uVar8 = (long)plStack_68 - (long)plStack_78 >> 2;
              if (uVar8 <= uVar4) {
                uVar8 = uVar4;
              }
              if (0x7ffffffffffffff7 < (ulong)((long)plStack_68 - (long)plStack_78)) {
                uVar8 = 0x1fffffffffffffff;
              }
              if (uVar8 == 0) {
                auVar12 = ZEXT816(0);
              }
              else {
                auVar12 = FUN_03f695c0(&plStack_68);
              }
              plVar7 = (long *)(auVar12._0_8_ + lVar11 * 8);
              plVar10 = plVar7 + 1;
              *plVar7 = lVar3;
              plVar1 = plStack_70;
              while (plStack_70 != plStack_78) {
                plStack_70 = plStack_70 + -1;
                plVar7 = plVar7 + -1;
                *plVar7 = *plStack_70;
                plVar1 = plStack_78;
              }
              plStack_68 = (long *)(auVar12._0_8_ + auVar12._8_8_ * 8);
              plStack_78 = plVar7;
              plStack_70 = plVar10;
              if (plVar1 != (long *)0x0) {
                operator_delete(plVar1);
                plStack_70 = plVar10;
              }
            }
          }
        }
        uVar4 = (long)plStack_70 - (long)plStack_78 >> 3;
        lVar2 = FUN_03f984c8(DAT_095354c0,uVar4);
        if (plVar1 != plVar7) {
          uVar8 = 0;
          puVar6 = (undefined8 *)(lVar2 + 0x20);
          if (uVar4 < 2) {
            uVar4 = 1;
          }
          do {
            uVar5 = FUN_03f9ab74(plStack_78[uVar8] + 0x20);
            *puVar6 = uVar5;
            FUN_03f5d7b8(puVar6);
            uVar8 = uVar8 + 1;
            puVar6 = puVar6 + 1;
          } while (uVar4 != uVar8);
        }
        if (plStack_78 != (long *)0x0) {
          plStack_70 = plStack_78;
          operator_delete(plStack_78);
        }
      }
      if (((ulong)plStack_a0 & 1) != 0) {
        operator_delete(plStack_90);
      }
      if ((bStack_b8 & 1) != 0) goto LAB_03f6e284;
    }
  }
LAB_03f6e288:
  for (lVar3 = 4; uVar4 = FUN_03f98240(lVar2), lVar3 - 4U < (uVar4 & 0xffffffff); lVar3 = lVar3 + 1)
  {
    uVar5 = *(undefined8 *)(*(long *)(lVar2 + lVar3 * 8) + 0x10);
    puVar6 = (undefined8 *)FUN_03f665b8(&uStack_e8);
    *puVar6 = uVar5;
  }
  uVar5 = FUN_03f8fd50(&uStack_e8);
LAB_03f6e2c4:
  FUN_03f6521c(&uStack_e8);
  return uVar5;
}

