// rea decompile_all
// name: Newtonsoft.Json.Converters.XmlNodeConverter$$SerializeGroupedNodes
// address: 0x7712444
// body: available
// range: 0x7712444-0x7712d93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7712d1c to 0x7712df8 Newtonsoft.Json.Converters.XmlNodeConverter$$WriteGroupedNodes (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7712d78 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7712d84 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7712d90 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Converters_XmlNodeConverter__SerializeGroupedNodes
               (undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,uint param_5)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  uint uVar14;
  long lVar15;
  uint uVar16;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *plStack_78;
  undefined8 local_70;
  long *local_68;
  
  if ((DAT_095229c8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919fb70);
    FUN_03f5c2a4(&DAT_0919fb88);
    FUN_03f5c2a4(&DAT_0919fba0);
    FUN_03f5c2a4(&DAT_0919fb58);
    FUN_03f5c2a4(&DAT_0919fbc8);
    FUN_03f5c2a4(&DAT_09176b80);
    FUN_03f5c2a4(&DAT_091a6810);
    FUN_03f5c2a4(&DAT_091a6818);
    FUN_03f5c2a4(&DAT_091a6820);
    FUN_03f5c2a4(&DAT_091869f8);
    FUN_03f5c2a4(&DAT_091a98a8);
    FUN_03f5c2a4(&DAT_091a98b0);
    FUN_03f5c2a4(&DAT_091ad7c8);
    FUN_03f5c2a4(&DAT_091ad7c0);
    FUN_03f5c2a4(&DAT_091ad7b8);
    FUN_03f5c2a4(&DAT_091ad7e8);
    FUN_03f5c2a4(&DAT_091ad7f0);
    FUN_03f5c2a4(&DAT_0917c448);
    DAT_095229c8 = 1;
  }
  local_70 = 0;
  local_68 = (long *)0x0;
  uStack_88 = 0;
  local_90 = 0;
  plStack_78 = (long *)0x0;
  local_80 = 0;
  if (param_3 != (long *)0x0) {
    lVar8 = *param_3;
    uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == DAT_091869f8) {
          puVar3 = (undefined8 *)(lVar8 + (long)(*piVar13 + 2) * 0x10 + 0x138);
          goto LAB_077125c8;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(param_3,DAT_091869f8,2);
LAB_077125c8:
    lVar8 = (*(code *)*puVar3)(param_3,puVar3[1]);
    if (lVar8 != 0) {
      if (*(int *)(lVar8 + 0x18) == 0) {
        return;
      }
      if (*(int *)(lVar8 + 0x18) != 1) {
        uVar16 = 0;
        lVar15 = 0;
        lVar8 = 0;
        do {
          lVar9 = *param_3;
          uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == DAT_091869f8) {
                puVar3 = (undefined8 *)(lVar9 + (long)(*piVar13 + 2) * 0x10 + 0x138);
                goto LAB_077126b4;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f95da8(param_3,DAT_091869f8,2);
LAB_077126b4:
          lVar9 = (*(code *)*puVar3)(param_3,puVar3[1]);
          if (lVar9 == 0) goto LAB_07712d78;
          if (*(int *)(lVar9 + 0x18) <= (int)uVar16) {
            if (lVar15 != 0) {
              FUN_06fd8888(&local_90,lVar15,DAT_0919fb88);
              goto LAB_07712b38;
            }
            lVar15 = *param_3;
            uVar12 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar12 == 0) goto LAB_07712c38;
            piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            goto LAB_07712c20;
          }
          lVar9 = *param_3;
          uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == DAT_091869f8) {
                puVar3 = (undefined8 *)(lVar9 + (long)(*piVar13 + 2) * 0x10 + 0x138);
                goto LAB_07712720;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f95da8(param_3,DAT_091869f8,2);
LAB_07712720:
          lVar9 = (*(code *)*puVar3)(param_3,puVar3[1]);
          if (lVar9 == 0) goto LAB_07712d78;
          uVar6 = FUN_057e0998(lVar9,uVar16,DAT_091ad7f0);
          lVar9 = Newtonsoft_Json_Converters_XmlNodeConverter__GetPropertyName(uVar6,uVar6,param_4);
          if (lVar15 == 0) {
            if (lVar8 == 0) {
              lVar15 = 0;
            }
            else {
              uVar12 = System_String__op_Equality(lVar9,lVar8,0);
              if ((uVar12 & 1) == 0) {
                lVar15 = thunk_FUN_03f9944c(DAT_09176b80);
                FUN_06fd76bc(lVar15,DAT_0919fb58);
                if (uVar16 < 2) {
                  lVar11 = *param_3;
                  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
                  if (uVar12 != 0) {
                    piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar13 + -2) == DAT_091869f8) {
                        puVar3 = (undefined8 *)(lVar11 + (long)(*piVar13 + 2) * 0x10 + 0x138);
                        goto LAB_07712ab0;
                      }
                      uVar12 = uVar12 - 1;
                      piVar13 = piVar13 + 4;
                    } while (uVar12 != 0);
                  }
                  puVar3 = (undefined8 *)FUN_03f95da8(param_3,DAT_091869f8,2);
LAB_07712ab0:
                  lVar11 = (*(code *)*puVar3)(param_3,puVar3[1]);
                  if (lVar11 == 0) goto LAB_07712d78;
                  lVar11 = FUN_057e0998(lVar11,0,DAT_091ad7f0);
                }
                else {
                  lVar11 = thunk_FUN_03f9944c(DAT_0917c448);
                  FUN_057e0478(lVar11,uVar16,DAT_091ad7c0);
                  uVar14 = 0;
                  do {
                    lVar5 = *param_3;
                    uVar12 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    if (uVar12 != 0) {
                      piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar13 + -2) == DAT_091869f8) {
                          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar13 + 2) * 0x10 + 0x138);
                          goto LAB_07712a00;
                        }
                        uVar12 = uVar12 - 1;
                        piVar13 = piVar13 + 4;
                      } while (uVar12 != 0);
                    }
                    puVar3 = (undefined8 *)FUN_03f95da8(param_3,DAT_091869f8,2);
LAB_07712a00:
                    lVar5 = (*(code *)*puVar3)(param_3,puVar3[1]);
                    if ((lVar5 == 0) ||
                       (uVar7 = FUN_057e0998(lVar5,uVar14,DAT_091ad7f0), lVar5 = DAT_091ad7c8,
                       lVar11 == 0)) goto LAB_07712d78;
                    lVar10 = *(long *)(lVar11 + 0x10);
                    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                    if (lVar10 == 0) goto LAB_07712d78;
                    uVar1 = *(uint *)(lVar11 + 0x18);
                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                      *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
                      thunk_FUN_03f5d7b8();
                    }
                    else {
                      FUN_057e0c68(lVar11,uVar7,
                                   *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70)
                                  );
                    }
                    uVar14 = uVar14 + 1;
                  } while (uVar14 != uVar16);
                }
                if (lVar15 != 0) {
                  FUN_06fd8454(lVar15,lVar8,lVar11,DAT_0919fb70);
                  goto LAB_07712af0;
                }
                goto LAB_07712d78;
              }
              lVar15 = 0;
              lVar9 = lVar8;
            }
          }
          else {
            uVar12 = FUN_06fd9fbc(lVar15,lVar9,&local_68,DAT_0919fba0);
            if ((uVar12 & 1) == 0) {
LAB_07712af0:
              FUN_06fd8454(lVar15,lVar9,uVar6,DAT_0919fb70);
              lVar9 = lVar8;
            }
            else {
              if (local_68 == (long *)0x0) {
LAB_077127ac:
                plVar4 = (long *)thunk_FUN_03f9944c();
                FUN_057e0400(plVar4,DAT_091ad7b8);
                plVar2 = local_68;
                lVar11 = DAT_091869f8;
                if (plVar4 == (long *)0x0) goto LAB_07712d78;
                if (local_68 == (long *)0x0) {
                  lVar5 = 0;
                }
                else {
                  lVar5 = thunk_FUN_03f99350(local_68,DAT_091869f8);
                  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c8d0(plVar2,lVar11);
                  }
                }
                lVar11 = DAT_091ad7c8;
                lVar10 = plVar4[2];
                *(int *)((long)plVar4 + 0x1c) = *(int *)((long)plVar4 + 0x1c) + 1;
                if (lVar10 == 0) goto LAB_07712d78;
                uVar14 = *(uint *)(plVar4 + 3);
                if (uVar14 < *(uint *)(lVar10 + 0x18)) {
                  *(uint *)(plVar4 + 3) = uVar14 + 1;
                  *(long *)(lVar10 + (long)(int)uVar14 * 8 + 0x20) = lVar5;
                  thunk_FUN_03f5d7b8();
                }
                else {
                  FUN_057e0c68(plVar4,lVar5,
                               *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                }
                FUN_06fd8440(lVar15,lVar9,plVar4,DAT_0919fbc8);
              }
              else if ((*(byte *)(*local_68 + 0x130) < *(byte *)(DAT_0917c448 + 0x130)) ||
                      (plVar4 = local_68,
                      *(long *)(*(long *)(*local_68 + 200) +
                                (ulong)*(byte *)(DAT_0917c448 + 0x130) * 8 + -8) != DAT_0917c448))
              goto LAB_077127ac;
              lVar9 = DAT_091ad7c8;
              lVar11 = plVar4[2];
              *(int *)((long)plVar4 + 0x1c) = *(int *)((long)plVar4 + 0x1c) + 1;
              if (lVar11 == 0) goto LAB_07712d78;
              uVar14 = *(uint *)(plVar4 + 3);
              if (uVar14 < *(uint *)(lVar11 + 0x18)) {
                *(uint *)(plVar4 + 3) = uVar14 + 1;
                *(undefined8 *)(lVar11 + (long)(int)uVar14 * 8 + 0x20) = uVar6;
                thunk_FUN_03f5d7b8();
                lVar9 = lVar8;
              }
              else {
                FUN_057e0c68(plVar4,uVar6,
                             *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                lVar9 = lVar8;
              }
            }
          }
          uVar16 = uVar16 + 1;
          lVar8 = lVar9;
        } while( true );
      }
      lVar8 = *param_3;
      uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == DAT_091869f8) {
            puVar3 = (undefined8 *)(lVar8 + (long)(*piVar13 + 2) * 0x10 + 0x138);
            goto LAB_07712c58;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(param_3,DAT_091869f8,2);
LAB_07712c58:
      lVar8 = (*(code *)*puVar3)(param_3,puVar3[1]);
      if (lVar8 != 0) {
        uVar6 = FUN_057e0998(lVar8,0,DAT_091ad7f0);
        uVar6 = Newtonsoft_Json_Converters_XmlNodeConverter__GetPropertyName(uVar6,uVar6,param_4);
        lVar8 = *param_3;
        uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == DAT_091869f8) {
              puVar3 = (undefined8 *)(lVar8 + (long)(*piVar13 + 2) * 0x10 + 0x138);
              goto LAB_07712cdc;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(param_3,DAT_091869f8,2);
LAB_07712cdc:
        uVar7 = (*(code *)*puVar3)(param_3,puVar3[1]);
        Newtonsoft_Json_Converters_XmlNodeConverter__WriteGroupedNodes
                  (param_1,param_2,param_4,param_5 & 1,uVar7,uVar6);
        return;
      }
    }
  }
LAB_07712d78:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
LAB_07712b38:
  uVar12 = FUN_072753d4(&local_90,DAT_091a6818);
  plVar4 = plStack_78;
  uVar6 = local_80;
  lVar8 = DAT_091869f8;
  if ((uVar12 & 1) == 0) {
    FUN_072754f4(&local_90,DAT_091a6810);
    return;
  }
  if (plStack_78 == (long *)0x0) {
    lVar15 = 0;
LAB_07712ba4:
    Newtonsoft_Json_Converters_XmlNodeConverter__WriteGroupedNodes
              (param_1,param_2,param_4,param_5 & 1,lVar15,uVar6);
    goto LAB_07712b38;
  }
  if ((*(byte *)(*plStack_78 + 0x130) < *(byte *)(DAT_0917c448 + 0x130)) ||
     (*(long *)(*(long *)(*plStack_78 + 200) + (ulong)*(byte *)(DAT_0917c448 + 0x130) * 8 + -8) !=
      DAT_0917c448)) {
    lVar15 = thunk_FUN_03f99350(plStack_78,DAT_091869f8);
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(plVar4,lVar8);
    }
    goto LAB_07712ba4;
  }
  Newtonsoft_Json_Converters_XmlNodeConverter__WriteGroupedNodes
            (param_1,param_2,param_4,param_5 & 1,plStack_78,local_80);
  goto LAB_07712b38;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_07712c20:
    if (*(long *)(piVar13 + -2) == DAT_091869f8) {
      puVar3 = (undefined8 *)(lVar15 + (long)(*piVar13 + 2) * 0x10 + 0x138);
      goto LAB_07712d30;
    }
  }
LAB_07712c38:
  puVar3 = (undefined8 *)FUN_03f95da8(param_3,DAT_091869f8,2);
LAB_07712d30:
  uVar6 = (*(code *)*puVar3)(param_3,puVar3[1]);
  Newtonsoft_Json_Converters_XmlNodeConverter__WriteGroupedNodes
            (param_1,param_2,param_4,param_5 & 1,uVar6,lVar8);
  return;
}

