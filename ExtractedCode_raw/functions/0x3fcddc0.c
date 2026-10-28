// rea decompile_all
// name: FUN_03fcddc0
// address: 0x3fcddc0
// body: available
// range: 0x3fcddc0-0x3fce273 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

long FUN_03fcddc0(ulong param_1,int param_2,uint param_3,undefined8 param_4,int param_5)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  ulong *puVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar10 = (&DAT_09748128)[(int)param_4];
  uVar7 = param_1 + 0xfff;
  if (0xfffffffffffff000 < param_1) {
    uVar7 = 0xffffffffffffffff;
  }
  if (uVar10 != 0) {
    uVar7 = uVar7 & 0xfffffffffffff000;
    uVar1 = uVar7;
    if ((param_3 & 1) != 0) {
      uVar1 = 0x1000;
    }
LAB_03fcde48:
    do {
      plVar6 = (long *)(&DAT_097440c8 + (uVar10 >> 0x16 & 0x7ff) * 8);
      do {
        lVar5 = *plVar6;
        plVar6 = (long *)(lVar5 + 0x2018);
      } while (*(ulong *)(lVar5 + 0x2010) != uVar10 >> 0x16 && lVar5 != DAT_09535c90);
      puVar9 = *(ulong **)(lVar5 + (uVar10 >> 0xc & 0x3ff) * 8);
      uVar8 = puVar9[4];
      if ((long)uVar7 <= (long)uVar8) {
        if (uVar8 != uVar7) {
          if (param_5 == 0) goto LAB_03fce044;
          uVar3 = *puVar9;
          if (uVar3 != 0) {
            plVar6 = (long *)(&DAT_097440c8 + (uVar3 >> 0x16 & 0x7ff) * 8);
            do {
              lVar5 = *plVar6;
              plVar6 = (long *)(lVar5 + 0x2018);
            } while (*(ulong *)(lVar5 + 0x2010) != uVar3 >> 0x16 && lVar5 != DAT_09535c90);
            lVar5 = *(long *)(*(long *)(lVar5 + (uVar3 >> 0xc & 0x3ff) * 8) + 0x20);
            if ((lVar5 < (long)uVar8 && (long)uVar7 <= lVar5) &&
               (lVar5 = FUN_03fcb7c0(uVar3,uVar7), lVar5 == 0)) goto LAB_03fce044;
          }
        }
        uVar3 = uVar8;
        if ((param_2 != 0 || 0x2000 < (long)uVar7) && param_2 != 2) {
          uVar3 = uVar10;
          do {
            uVar11 = uVar3;
            if ((uVar10 + uVar8) - uVar7 < uVar11) break;
            uVar3 = FUN_03fcb7c0(uVar11,uVar1);
          } while (uVar3 != 0);
          uVar3 = (uVar10 - uVar11) + uVar8;
          if ((long)uVar3 < (long)uVar7) {
            if ((DAT_09515610 < (long)uVar7) && (DAT_09515610 < (long)(uVar8 - uVar7))) {
              DAT_09748508 = DAT_09748508 + 1;
              uVar3 = uVar8;
              if (DAT_09515650 <= DAT_09748508) {
                (*(code *)PTR_thunk_FUN_03fcb048_09515630)
                          ("GC Warning: Repeated allocation of very large block (appr. size %ld):\n\tMay lead to memory leak and poor performance\n"
                           ,uVar7);
                DAT_09748508 = 0;
              }
            }
            else if ((uVar7 == 0x1000) && (uVar3 == 0)) {
              if (((*(byte *)((long)puVar9 + 0x19) & 2) == 0 && DAT_09748510 == 0) &&
                 (DAT_09748514 = DAT_09748514 + 1, (DAT_09748514 & 3) == 0)) {
                uVar11 = puVar9[1];
                uVar3 = uVar10 + (uVar8 & 0xfffffffffffff000);
                DAT_09535c08 = DAT_09535c08 - uVar8;
                DAT_09535c30 = DAT_09535c30 + uVar8;
                FUN_03fcd470(puVar9,param_4);
                if (uVar10 < uVar3) {
                  lVar5 = 0;
                  do {
                    if (lVar5 != 0) {
                      puVar9 = (ulong *)FUN_03fcc6f4(uVar10 + lVar5);
                    }
                    if ((puVar9 != (ulong *)0x0) &&
                       (FUN_03fce344(puVar9,uVar10 + lVar5,0x1000,0,0), DAT_097480f4 != 0)) {
                      memset((void *)(uVar10 + lVar5),0,0x1000);
                    }
                    lVar5 = lVar5 + 0x1000;
                  } while (uVar10 + lVar5 < uVar3);
                }
                if (uVar11 == 0) {
                  uVar10 = (&DAT_09748128)[(int)param_4];
                  if (uVar10 == 0) {
                    return 0;
                  }
                  goto LAB_03fcde48;
                }
                plVar6 = (long *)(&DAT_097440c8 + (uVar11 >> 0x16 & 0x7ff) * 8);
                do {
                  lVar5 = *plVar6;
                  plVar6 = (long *)(lVar5 + 0x2018);
                } while (*(ulong *)(lVar5 + 0x2010) != uVar11 >> 0x16 && lVar5 != DAT_09535c90);
                uVar3 = 0;
                puVar9 = *(ulong **)(lVar5 + (uVar11 >> 0xc & 0x3ff) * 8);
                uVar10 = uVar11;
              }
              else {
                uVar3 = 0;
              }
            }
          }
          else if (uVar11 != uVar10) {
            if ((param_5 == 2) && ((*(byte *)((long)puVar9 + 0x19) >> 1 & 1) != 0))
            goto LAB_03fce044;
            puVar4 = (ulong *)FUN_03fcc6f4(uVar11);
            if (puVar4 != (ulong *)0x0) {
              if ((*(byte *)((long)puVar9 + 0x19) >> 1 & 1) != 0) {
                uVar8 = (uVar10 + DAT_09748110) - 1 & -DAT_09748110;
                if ((uVar8 != 0) && (uVar8 + DAT_09748110 <= uVar10 + puVar9[4])) {
                  DAT_09535c88 = (uVar8 - (uVar10 + puVar9[4] & -DAT_09748110)) + DAT_09535c88;
                }
                *(byte *)((long)puVar9 + 0x19) = *(byte *)((long)puVar9 + 0x19) & 0xfd;
              }
              FUN_03fcdcc0(uVar10,puVar9,uVar11,puVar4,param_4);
              puVar9 = puVar4;
              uVar10 = uVar11;
            }
          }
        }
        if ((long)uVar7 <= (long)uVar3) {
          if ((*(byte *)((long)puVar9 + 0x19) >> 1 & 1) != 0) {
            uVar1 = (uVar10 + DAT_09748110) - 1 & -DAT_09748110;
            if ((uVar1 != 0) && (uVar1 + DAT_09748110 <= uVar10 + puVar9[4])) {
              DAT_09535c88 = (uVar1 - (uVar10 + puVar9[4] & -DAT_09748110)) + DAT_09535c88;
            }
            *(byte *)((long)puVar9 + 0x19) = *(byte *)((long)puVar9 + 0x19) & 0xfd;
          }
          lVar5 = FUN_03fcdc4c(uVar10,puVar9,uVar7,param_4);
          if (lVar5 == 0) {
            return 0;
          }
          iVar2 = FUN_03fcc8a0(lVar5,uVar7);
          if (iVar2 == 0) {
            return 0;
          }
          iVar2 = FUN_03fce344(puVar9,lVar5,param_1,param_2,param_3);
          if (iVar2 == 0) {
            FUN_03fcc9c0(lVar5,uVar7);
            return 0;
          }
          DAT_09535c08 = DAT_09535c08 - uVar7;
          DAT_09748518 = 0;
          return lVar5;
        }
      }
LAB_03fce044:
      uVar10 = *puVar9;
    } while (uVar10 != 0);
  }
  return 0;
}

