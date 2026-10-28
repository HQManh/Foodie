// rea decompile_all
// name: Newtonsoft.Json.Converters.XmlNodeConverter$$DeserializeNode
// address: 0x771415c
// body: available
// range: 0x771415c-0x771477f inclusive
// range: 0x77147d0-0x77148df inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7714834 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7714840 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7714878 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Converters_XmlNodeConverter__DeserializeNode
               (long param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  code *pcVar10;
  int *piVar11;
  undefined8 local_a8;
  undefined8 *puStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 *puStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 local_68;
  
  if ((DAT_095229d8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a3248);
    FUN_03f5c2a4(&DAT_091a3250);
    FUN_03f5c2a4(&DAT_091a3258);
    FUN_03f5c2a4(&DAT_091869d0);
    FUN_03f5c2a4(&DAT_091869e0);
    FUN_03f5c2a4(&DAT_091869f8);
    FUN_03f5c2a4(&DAT_091ad7d0);
    DAT_095229d8 = 1;
  }
  local_70 = 0;
  local_68 = 0;
  local_90 = 0;
  puStack_88 = (undefined8 *)0x0;
  local_80 = 0;
  if (param_2 != (long *)0x0) {
    do {
      iVar1 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
      if (iVar1 == 3) {
        plVar4 = (long *)(**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
        if (plVar4 == (long *)0x0) break;
        uVar6 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
        pcVar10 = *(code **)(*param_2 + 0x288);
        uVar7 = *(undefined8 *)(*param_2 + 0x290);
        while ((uVar9 = (*pcVar10)(param_2,uVar7), (uVar9 & 1) != 0 &&
               (iVar1 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240)),
               iVar1 != 0xf))) {
          Newtonsoft_Json_Converters_XmlNodeConverter__DeserializeValue
                    (param_1,param_2,param_3,param_4,uVar6,param_5);
          pcVar10 = *(code **)(*param_2 + 0x288);
          uVar7 = *(undefined8 *)(*param_2 + 0x290);
        }
      }
      else if (iVar1 == 4) {
        if (param_5 == (long *)0x0) break;
        lVar8 = *param_5;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == DAT_091869f8) {
              puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_077143a0;
            }
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(param_5,DAT_091869f8,0);
LAB_077143a0:
        iVar1 = (*(code *)*puVar5)(param_5,puVar5[1]);
        if (iVar1 == 9) {
          if (param_3 == (long *)0x0) break;
          lVar8 = *param_3;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == DAT_091869d0) {
                puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 0xc) * 0x10 + 0x138);
                goto LAB_07714498;
              }
              uVar9 = uVar9 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar9 != 0);
          }
          puVar5 = (undefined8 *)FUN_03f95da8(param_3,DAT_091869d0,0xc);
LAB_07714498:
          lVar8 = (*(code *)*puVar5)(param_3,puVar5[1]);
          if (lVar8 != 0) {
            uVar6 = thunk_FUN_03fc39d4(&DAT_09206340);
            goto LAB_07714850;
          }
        }
        plVar4 = (long *)(**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
        if (plVar4 == (long *)0x0) break;
        uVar6 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
        Newtonsoft_Json_JsonReader__ReadAndAssert(param_2,0);
        iVar1 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
        if (iVar1 == 2) {
          uVar9 = (**(code **)(*param_2 + 0x288))(param_2,*(undefined8 *)(*param_2 + 0x290));
          if ((uVar9 & 1) != 0) {
            iVar1 = 0;
            do {
              iVar2 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
              if (iVar2 == 0xe) break;
              Newtonsoft_Json_Converters_XmlNodeConverter__DeserializeValue
                        (param_1,param_2,param_3,param_4,uVar6,param_5);
              iVar1 = iVar1 + 1;
              uVar9 = (**(code **)(*param_2 + 0x288))(param_2,*(undefined8 *)(*param_2 + 0x290));
            } while ((uVar9 & 1) != 0);
            if ((iVar1 == 1) && (*(char *)(param_1 + 0x18) != '\0')) {
              Newtonsoft_Json_Utilities_MiscellaneousUtils__GetQualifiedNameParts
                        (uVar6,&local_68,&local_70,0);
              uVar9 = Newtonsoft_Json_Utilities_StringUtils__IsNullOrEmpty(local_68,0);
              if ((uVar9 & 1) == 0) {
                if (param_4 == (long *)0x0) break;
                uVar6 = (**(code **)(*param_4 + 0x238))
                                  (param_4,local_68,*(undefined8 *)(*param_4 + 0x240));
              }
              else {
                if (param_4 == (long *)0x0) break;
                uVar6 = (**(code **)(*param_4 + 0x1c8))(param_4,*(undefined8 *)(*param_4 + 0x1d0));
              }
              lVar8 = *param_5;
              uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar9 != 0) {
                piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == DAT_091869f8) {
                    puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 2) * 0x10 + 0x138);
                    goto LAB_07714624;
                  }
                  uVar9 = uVar9 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar9 != 0);
              }
              puVar5 = (undefined8 *)FUN_03f95da8(param_5,DAT_091869f8,2);
LAB_07714624:
              lVar8 = (*(code *)*puVar5)(param_5,puVar5[1]);
              if (lVar8 == 0) break;
              FUN_057e185c(&local_a8,lVar8,DAT_091ad7d0);
              local_80 = CONCAT44(uStack_94,local_98);
              puStack_88 = puStack_a0;
              local_90 = local_a8;
              local_a8 = 0;
              puStack_a0 = &local_90;
              do {
                do {
                  do {
                    uVar9 = FUN_071bd28c(&local_90,DAT_091a3250);
                    if ((uVar9 & 1) == 0) goto LAB_07714768;
                    plVar4 = (long *)thunk_FUN_03f99350(local_80,DAT_091869e0);
                  } while (plVar4 == (long *)0x0);
                  lVar8 = *plVar4;
                  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
                  if (uVar9 != 0) {
                    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar11 + -2) == DAT_091869f8) {
                        puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                        goto LAB_077146d4;
                      }
                      uVar9 = uVar9 - 1;
                      piVar11 = piVar11 + 4;
                    } while (uVar9 != 0);
                  }
                  puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_091869f8,1);
LAB_077146d4:
                  uVar7 = (*(code *)*puVar5)(plVar4,puVar5[1]);
                  uVar9 = System_String__op_Equality(uVar7,local_70,0);
                } while ((uVar9 & 1) == 0);
                lVar8 = *plVar4;
                uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
                if (uVar9 != 0) {
                  piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar11 + -2) == DAT_091869f8) {
                      puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 8) * 0x10 + 0x138);
                      goto LAB_07714740;
                    }
                    uVar9 = uVar9 - 1;
                    piVar11 = piVar11 + 4;
                  } while (uVar9 != 0);
                }
                puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_091869f8,8);
LAB_07714740:
                uVar7 = (*(code *)*puVar5)(plVar4,puVar5[1]);
                uVar9 = System_String__op_Equality(uVar7,uVar6,0);
              } while ((uVar9 & 1) == 0);
              Newtonsoft_Json_Converters_XmlNodeConverter__AddJsonArrayAttribute
                        (uVar9,plVar4,param_3);
LAB_07714768:
              FUN_071bd288(&local_90,DAT_091a3248);
            }
          }
        }
        else {
          Newtonsoft_Json_Converters_XmlNodeConverter__DeserializeValue
                    (param_1,param_2,param_3,param_4,uVar6,param_5);
        }
      }
      else {
        if (iVar1 != 5) {
          if (0xfffffffd < iVar1 - 0xfU) {
            return;
          }
          FUN_039b1d98(param_2);
          uVar3 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
          local_a8 = thunk_FUN_03fc39d4(&DAT_09187478);
          puStack_a0 = (undefined8 *)0xffffffffffffffff;
          local_98 = uVar3;
          uVar6 = System_Enum__ToString(&local_a8,0);
          uVar7 = thunk_FUN_03fc39d4(&DAT_09211c00);
          uVar6 = System_String__Concat(uVar7,uVar6,0);
LAB_07714850:
          uVar6 = Newtonsoft_Json_JsonSerializationException__Create(param_2,uVar6,0);
          uVar7 = thunk_FUN_03fc39d4(&DAT_091e0070);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar6,uVar7);
        }
        plVar4 = (long *)(**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
        if (param_3 == (long *)0x0) break;
        if ((plVar4 != (long *)0x0) && (*plVar4 != DAT_09535468)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar4,DAT_09535468);
        }
        lVar8 = *param_3;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == DAT_091869d0) {
              puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_0771440c;
            }
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(param_3,DAT_091869d0,0);
LAB_0771440c:
        uVar6 = (*(code *)*puVar5)(param_3,plVar4,puVar5[1]);
        if (param_5 == (long *)0x0) break;
        lVar8 = *param_5;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == DAT_091869f8) {
              puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 7) * 0x10 + 0x138);
              goto LAB_07714474;
            }
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(param_5,DAT_091869f8,7);
LAB_07714474:
        (*(code *)*puVar5)(param_5,uVar6,puVar5[1]);
      }
      uVar9 = (**(code **)(*param_2 + 0x288))(param_2,*(undefined8 *)(*param_2 + 0x290));
      if ((uVar9 & 1) == 0) {
        return;
      }
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

