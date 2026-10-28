// rea decompile_all
// name: Newtonsoft.Json.Converters.XmlNodeConverter$$SerializeNode
// address: 0x77101e0
// body: available
// range: 0x77101e0-0x7711847 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7710488 to 0x7712444 Newtonsoft.Json.Converters.XmlNodeConverter$$SerializeGroupedNodes (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7711748 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x771174c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7711794 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77117a0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7711844 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Converters_XmlNodeConverter__SerializeNode
               (undefined8 param_1,long *param_2,long *param_3,long *param_4,uint param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  code *UNRECOVERED_JUMPTABLE;
  int *piVar10;
  undefined1 auVar11 [16];
  undefined8 local_98;
  undefined8 *puStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 *puStack_78;
  long *local_70;
  
  if ((DAT_095229ca & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a3248);
    FUN_03f5c2a4(&DAT_091a3250);
    FUN_03f5c2a4(&DAT_091a3258);
    FUN_03f5c2a4(&DAT_091869c8);
    FUN_03f5c2a4(&DAT_091869d8);
    FUN_03f5c2a4(&DAT_091869e0);
    FUN_03f5c2a4(&DAT_091869f8);
    FUN_03f5c2a4(&DAT_091ad7d0);
    FUN_03f5c2a4(&DAT_091ad7e8);
    FUN_03f5c2a4(&DAT_091ad7f0);
    FUN_03f5c2a4(&DAT_0918d4d8);
    FUN_03f5c2a4(&DAT_0918d620);
    FUN_03f5c2a4(&DAT_0921ce18);
    FUN_03f5c2a4(&DAT_091fae50);
    FUN_03f5c2a4(&DAT_0921ceb0);
    FUN_03f5c2a4(&DAT_091fae60);
    FUN_03f5c2a4(&DAT_091fae28);
    FUN_03f5c2a4(&DAT_091fae58);
    FUN_03f5c2a4(&DAT_091fae30);
    FUN_03f5c2a4(&DAT_09225c00);
    FUN_03f5c2a4(&DAT_091fbeb0);
    FUN_03f5c2a4(&DAT_091fae20);
    FUN_03f5c2a4(&DAT_091fae48);
    DAT_095229ca = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = (long *)0x0;
  if (param_3 == (long *)0x0) goto LAB_07711748;
  lVar7 = *param_3;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == DAT_091869f8) {
        puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_07710398;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar3 = (undefined8 *)FUN_03f95da8(param_3,DAT_091869f8,0);
LAB_07710398:
  uVar4 = (*(code *)*puVar3)(param_3,puVar3[1]);
  lVar8 = DAT_091869d8;
  lVar7 = DAT_091869c8;
  iVar1 = (int)uVar4;
  if (iVar1 < 9) {
    if (iVar1 < 7) {
      if (2 < iVar1 - 2U) {
        if (iVar1 != 1) {
LAB_077117a4:
          FUN_039b1d98(param_3);
          uVar4 = thunk_FUN_03fc39d4(&DAT_091869f8);
          uVar2 = FUN_039afee4(0,uVar4,param_3);
          local_98 = thunk_FUN_03fc39d4(&DAT_0918d638);
          puStack_90 = (undefined8 *)0xffffffffffffffff;
          local_88 = uVar2;
          uVar4 = System_Enum__ToString(&local_98,0);
          uVar6 = thunk_FUN_03fc39d4(&DAT_09211c28);
          uVar4 = System_String__Concat(uVar6,uVar4,0);
          thunk_FUN_03fc39d4(&DAT_09187420);
          uVar6 = thunk_FUN_03f9944c();
          Newtonsoft_Json_JsonSerializationException___ctor(uVar6,uVar4,0);
          uVar4 = thunk_FUN_03fc39d4(&DAT_091e0098);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar6,uVar4);
        }
        uVar9 = Newtonsoft_Json_Converters_XmlNodeConverter__IsArray(uVar4,param_3);
        if ((uVar9 & 1) != 0) {
          if (*(int *)(DAT_0918d620 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar9 = Newtonsoft_Json_Converters_XmlNodeConverter__AllSameName(param_3);
          if ((uVar9 & 1) != 0) {
            lVar7 = *param_3;
            uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == DAT_091869f8) {
                  puVar3 = (undefined8 *)(lVar7 + (long)(*piVar10 + 2) * 0x10 + 0x138);
                  goto LAB_07710f44;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar3 = (undefined8 *)FUN_03f95da8(param_3,DAT_091869f8,2);
LAB_07710f44:
            lVar7 = (*(code *)*puVar3)(param_3,puVar3[1]);
            if (lVar7 == 0) goto LAB_07711748;
            if (0 < *(int *)(lVar7 + 0x18)) {
              param_5 = 0;
              goto LAB_0771046c;
            }
          }
        }
        if (param_4 != (long *)0x0) {
          (**(code **)(*param_4 + 0x1d8))(param_4,*(undefined8 *)(*param_4 + 0x1e0));
          lVar7 = *param_3;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == DAT_091869f8) {
                puVar3 = (undefined8 *)(lVar7 + (long)(*piVar10 + 3) * 0x10 + 0x138);
                goto LAB_07710fdc;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f95da8(param_3,DAT_091869f8,3);
LAB_07710fdc:
          lVar7 = (*(code *)*puVar3)(param_3,puVar3[1]);
          if (lVar7 == 0) goto LAB_07711748;
          FUN_057e185c(&local_98,lVar7,DAT_091ad7d0);
          local_70 = (long *)CONCAT44(uStack_84,local_88);
          puStack_78 = puStack_90;
          local_80 = local_98;
          puStack_90 = &local_80;
          local_98 = 0;
          while (uVar9 = FUN_071bd28c(&local_80,DAT_091a3250), plVar5 = local_70, (uVar9 & 1) != 0)
          {
            if (local_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar7 = *local_70;
            uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == DAT_091869f8) {
                  puVar3 = (undefined8 *)(lVar7 + (long)(*piVar10 + 8) * 0x10 + 0x138);
                  goto LAB_07711098;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar3 = (undefined8 *)FUN_03f95da8(local_70,DAT_091869f8,8);
LAB_07711098:
            uVar4 = (*(code *)*puVar3)(plVar5,puVar3[1]);
            uVar9 = System_String__op_Equality(uVar4,DAT_0921ceb0,0);
            if ((uVar9 & 1) != 0) {
              lVar7 = *plVar5;
              uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar9 != 0) {
                piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == DAT_091869f8) {
                    puVar3 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                    goto LAB_07711104;
                  }
                  uVar9 = uVar9 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar9 != 0);
              }
              puVar3 = (undefined8 *)FUN_03f95da8(plVar5,DAT_091869f8,1);
LAB_07711104:
              uVar4 = (*(code *)*puVar3)(plVar5,puVar3[1]);
              uVar9 = System_String__op_Inequality(uVar4,DAT_09225c00,0);
              if ((uVar9 & 1) == 0) {
                uVar4 = **(undefined8 **)(DAT_09535468 + 0xb8);
              }
              else {
                lVar7 = *plVar5;
                uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
                if (uVar9 != 0) {
                  piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar10 + -2) == DAT_091869f8) {
                      puVar3 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                      goto LAB_07711188;
                    }
                    uVar9 = uVar9 - 1;
                    piVar10 = piVar10 + 4;
                  } while (uVar9 != 0);
                }
                puVar3 = (undefined8 *)FUN_03f95da8(plVar5,DAT_091869f8,1);
LAB_07711188:
                uVar4 = (*(code *)*puVar3)(plVar5,puVar3[1]);
                if (*(int *)(DAT_0918d4d8 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar4 = System_Xml_XmlConvert__DecodeName(uVar4,0);
              }
              lVar7 = *plVar5;
              uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar9 != 0) {
                piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == DAT_091869f8) {
                    puVar3 = (undefined8 *)(lVar7 + (long)(*piVar10 + 5) * 0x10 + 0x138);
                    goto LAB_07711210;
                  }
                  uVar9 = uVar9 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar9 != 0);
              }
              puVar3 = (undefined8 *)FUN_03f95da8(plVar5,DAT_091869f8,5);
LAB_07711210:
              auVar11 = (*(code *)*puVar3)(plVar5,puVar3[1]);
              if (auVar11._0_8_ == 0) {
                thunk_FUN_03fc39d4(&DAT_09187420,auVar11._8_8_,0);
                uVar4 = thunk_FUN_03f9944c();
                uVar6 = thunk_FUN_03fc39d4(&DAT_09208600);
                Newtonsoft_Json_JsonSerializationException___ctor(uVar4,uVar6,0);
                uVar6 = thunk_FUN_03fc39d4(&DAT_091e0098);
                    /* WARNING: Subroutine does not return */
                FUN_03f5c414(uVar4,uVar6);
              }
              (**(code **)(*param_4 + 0x1f8))
                        (param_4,uVar4,auVar11._0_8_,*(undefined8 *)(*param_4 + 0x200));
            }
          }
          uVar4 = FUN_071bd288(&local_80,DAT_091a3248);
          if ((param_5 & 1) != 0) {
            uVar4 = Newtonsoft_Json_Converters_XmlNodeConverter__GetPropertyName
                              (uVar4,param_3,param_4);
            if (param_2 == (long *)0x0) goto LAB_07711748;
            (**(code **)(*param_2 + 0x5d8))(param_2,uVar4,*(undefined8 *)(*param_2 + 0x5e0));
          }
          lVar7 = *param_3;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == DAT_091869f8) {
                puVar3 = (undefined8 *)(lVar7 + (long)(*piVar10 + 3) * 0x10 + 0x138);
                goto LAB_077112cc;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f95da8(param_3,DAT_091869f8,3);
LAB_077112cc:
          uVar4 = (*(code *)*puVar3)(param_3,puVar3[1]);
          uVar9 = Newtonsoft_Json_Converters_XmlNodeConverter__ValueAttributes(uVar4,uVar4);
          if ((uVar9 & 1) == 0) {
            lVar7 = *param_3;
            uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == DAT_091869f8) {
                  puVar3 = (undefined8 *)(lVar7 + (long)(*piVar10 + 2) * 0x10 + 0x138);
                  goto LAB_07711334;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar3 = (undefined8 *)FUN_03f95da8(param_3,DAT_091869f8,2);
LAB_07711334:
            lVar7 = (*(code *)*puVar3)(param_3,puVar3[1]);
            if (lVar7 == 0) goto LAB_07711748;
            if (*(int *)(lVar7 + 0x18) == 1) {
              lVar7 = *param_3;
              uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar9 != 0) {
                piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == DAT_091869f8) {
                    puVar3 = (undefined8 *)(lVar7 + (long)(*piVar10 + 2) * 0x10 + 0x138);
                    goto LAB_077113a0;
                  }
                  uVar9 = uVar9 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar9 != 0);
              }
              puVar3 = (undefined8 *)FUN_03f95da8(param_3,DAT_091869f8,2);
LAB_077113a0:
              lVar7 = (*(code *)*puVar3)(param_3,puVar3[1]);
              if ((lVar7 == 0) ||
                 (plVar5 = (long *)FUN_057e0998(lVar7,0,DAT_091ad7f0), plVar5 == (long *)0x0))
              goto LAB_07711748;
              lVar7 = *plVar5;
              uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar9 != 0) {
                piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == DAT_091869f8) {
                    puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                    goto LAB_07711418;
                  }
                  uVar9 = uVar9 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar9 != 0);
              }
              puVar3 = (undefined8 *)FUN_03f95da8(plVar5,DAT_091869f8,0);
LAB_07711418:
              iVar1 = (*(code *)*puVar3)(plVar5,puVar3[1]);
              if (iVar1 == 3) {
                lVar7 = FUN_039afee4(2,DAT_091869f8,param_3);
                if (((lVar7 == 0) || (lVar7 = FUN_057e0998(lVar7,0,DAT_091ad7f0), lVar7 == 0)) ||
                   (uVar4 = FUN_039afee4(5,DAT_091869f8,lVar7), param_2 == (long *)0x0))
                goto LAB_07711748;
                (**(code **)(*param_2 + 0x698))(param_2,uVar4,*(undefined8 *)(*param_2 + 0x6a0));
                goto LAB_07711698;
              }
            }
          }
          lVar7 = *param_3;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == DAT_091869f8) {
                puVar3 = (undefined8 *)(lVar7 + (long)(*piVar10 + 2) * 0x10 + 0x138);
                goto LAB_077114d0;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f95da8(param_3,DAT_091869f8,2);
LAB_077114d0:
          lVar7 = (*(code *)*puVar3)(param_3,puVar3[1]);
          if (lVar7 != 0) {
            if (*(int *)(lVar7 + 0x18) == 0) {
              lVar7 = *param_3;
              uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar9 != 0) {
                piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == DAT_091869f8) {
                    puVar3 = (undefined8 *)(lVar7 + (long)(*piVar10 + 3) * 0x10 + 0x138);
                    goto LAB_07711538;
                  }
                  uVar9 = uVar9 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar9 != 0);
              }
              puVar3 = (undefined8 *)FUN_03f95da8(param_3,DAT_091869f8,3);
LAB_07711538:
              lVar7 = (*(code *)*puVar3)(param_3,puVar3[1]);
              if (lVar7 == 0) goto LAB_07711748;
              if (*(int *)(lVar7 + 0x18) == 0) {
                lVar7 = FUN_039bcaa8(param_3,DAT_091869e0);
                uVar4 = DAT_091869e0;
                if (lVar7 != 0) {
                  uVar6 = FUN_039bcaa8(param_3,DAT_091869e0);
                  uVar9 = FUN_039afee4(2,uVar4,uVar6);
                  if ((uVar9 & 1) == 0) {
                    if (param_2 != (long *)0x0) {
                      (**(code **)(*param_2 + 0x698))
                                (param_2,**(undefined8 **)(DAT_09535468 + 0xb8),
                                 *(undefined8 *)(*param_2 + 0x6a0));
                      goto LAB_07711698;
                    }
                  }
                  else if (param_2 != (long *)0x0) {
                    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x658);
                    uVar4 = *(undefined8 *)(*param_2 + 0x660);
LAB_07711690:
                    (*UNRECOVERED_JUMPTABLE)(param_2,uVar4);
LAB_07711698:
                    (**(code **)(*param_4 + 0x1e8))(param_4,*(undefined8 *)(*param_4 + 0x1f0));
                    return;
                  }
                }
                goto LAB_07711748;
              }
            }
            if (param_2 != (long *)0x0) {
              (**(code **)(*param_2 + 0x578))(param_2,*(undefined8 *)(*param_2 + 0x580));
              iVar1 = 0;
              do {
                lVar7 = *param_3;
                uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
                if (uVar9 != 0) {
                  piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar10 + -2) == DAT_091869f8) {
                      puVar3 = (undefined8 *)(lVar7 + (long)(*piVar10 + 3) * 0x10 + 0x138);
                      goto LAB_077115c4;
                    }
                    uVar9 = uVar9 - 1;
                    piVar10 = piVar10 + 4;
                  } while (uVar9 != 0);
                }
                puVar3 = (undefined8 *)FUN_03f95da8(param_3,DAT_091869f8,3);
LAB_077115c4:
                lVar7 = (*(code *)*puVar3)(param_3,puVar3[1]);
                if (lVar7 == 0) break;
                if (*(int *)(lVar7 + 0x18) <= iVar1) {
                  Newtonsoft_Json_Converters_XmlNodeConverter__SerializeGroupedNodes
                            (param_1,param_2,param_3,param_4,1);
                  UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x588);
                  uVar4 = *(undefined8 *)(*param_2 + 0x590);
                  goto LAB_07711690;
                }
                lVar7 = *param_3;
                uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
                if (uVar9 != 0) {
                  piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar10 + -2) == DAT_091869f8) {
                      puVar3 = (undefined8 *)(lVar7 + (long)(*piVar10 + 3) * 0x10 + 0x138);
                      goto LAB_07711630;
                    }
                    uVar9 = uVar9 - 1;
                    piVar10 = piVar10 + 4;
                  } while (uVar9 != 0);
                }
                puVar3 = (undefined8 *)FUN_03f95da8(param_3,DAT_091869f8,3);
LAB_07711630:
                lVar7 = (*(code *)*puVar3)(param_3,puVar3[1]);
                if (lVar7 == 0) break;
                uVar4 = FUN_057e0998(lVar7,iVar1,DAT_091ad7f0);
                Newtonsoft_Json_Converters_XmlNodeConverter__SerializeNode
                          (param_1,param_2,uVar4,param_4,1);
                iVar1 = iVar1 + 1;
              } while( true );
            }
          }
        }
        goto LAB_07711748;
      }
    }
    else if (iVar1 != 7) {
      if (iVar1 != 8) goto LAB_077117a4;
      if ((param_5 & 1) == 0) {
        return;
      }
      lVar7 = *param_3;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_091869f8) {
            puVar3 = (undefined8 *)(lVar7 + (long)(*piVar10 + 5) * 0x10 + 0x138);
            goto LAB_077109d4;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(param_3,DAT_091869f8,5);
LAB_077109d4:
      uVar4 = (*(code *)*puVar3)(param_3,puVar3[1]);
      if (param_2 == (long *)0x0) goto LAB_07711748;
      uVar6 = *(undefined8 *)(*param_2 + 0x900);
      UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x8f8);
      goto LAB_07710898;
    }
  }
  else {
    if (iVar1 < 0xd) {
      if (iVar1 != 9) {
        if (iVar1 == 10) {
          plVar5 = (long *)thunk_FUN_03f99350(param_3,DAT_091869d8);
          lVar7 = lVar8;
          if (plVar5 == (long *)0x0) goto LAB_07711798;
          uVar4 = Newtonsoft_Json_Converters_XmlNodeConverter__GetPropertyName
                            (plVar5,param_3,param_4);
          if (param_2 == (long *)0x0) goto LAB_07711748;
          (**(code **)(*param_2 + 0x5d8))(param_2,uVar4,*(undefined8 *)(*param_2 + 0x5e0));
          (**(code **)(*param_2 + 0x578))(param_2,*(undefined8 *)(*param_2 + 0x580));
          lVar7 = *plVar5;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == DAT_091869d8) {
                puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_0771094c;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f95da8(plVar5,DAT_091869d8,0);
LAB_0771094c:
          uVar4 = (*(code *)*puVar3)(plVar5,puVar3[1]);
          uVar9 = Newtonsoft_Json_Utilities_StringUtils__IsNullOrEmpty(uVar4,0);
          if ((uVar9 & 1) == 0) {
            (**(code **)(*param_2 + 0x5d8))(param_2,DAT_091fae30,*(undefined8 *)(*param_2 + 0x5e0));
            lVar7 = *plVar5;
            uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == DAT_091869d8) {
                  puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_07710bec;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar3 = (undefined8 *)FUN_03f95da8(plVar5,DAT_091869d8,0);
LAB_07710bec:
            uVar4 = (*(code *)*puVar3)(plVar5,puVar3[1]);
            (**(code **)(*param_2 + 0x698))(param_2,uVar4,*(undefined8 *)(*param_2 + 0x6a0));
          }
          lVar7 = *plVar5;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == DAT_091869d8) {
                puVar3 = (undefined8 *)(lVar7 + (long)(*piVar10 + 2) * 0x10 + 0x138);
                goto LAB_07710c60;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f95da8(plVar5,DAT_091869d8,2);
LAB_07710c60:
          uVar4 = (*(code *)*puVar3)(plVar5,puVar3[1]);
          uVar9 = Newtonsoft_Json_Utilities_StringUtils__IsNullOrEmpty(uVar4,0);
          if ((uVar9 & 1) == 0) {
            (**(code **)(*param_2 + 0x5d8))(param_2,DAT_091fae48,*(undefined8 *)(*param_2 + 0x5e0));
            lVar7 = *plVar5;
            uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == DAT_091869d8) {
                  puVar3 = (undefined8 *)(lVar7 + (long)(*piVar10 + 2) * 0x10 + 0x138);
                  goto LAB_07710ce8;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar3 = (undefined8 *)FUN_03f95da8(plVar5,DAT_091869d8,2);
LAB_07710ce8:
            uVar4 = (*(code *)*puVar3)(plVar5,puVar3[1]);
            (**(code **)(*param_2 + 0x698))(param_2,uVar4,*(undefined8 *)(*param_2 + 0x6a0));
          }
          lVar7 = *plVar5;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == DAT_091869d8) {
                puVar3 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                goto LAB_07710d5c;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f95da8(plVar5,DAT_091869d8,1);
LAB_07710d5c:
          uVar4 = (*(code *)*puVar3)(plVar5,puVar3[1]);
          uVar9 = Newtonsoft_Json_Utilities_StringUtils__IsNullOrEmpty(uVar4,0);
          if ((uVar9 & 1) == 0) {
            (**(code **)(*param_2 + 0x5d8))(param_2,DAT_091fae58,*(undefined8 *)(*param_2 + 0x5e0));
            lVar7 = *plVar5;
            uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == DAT_091869d8) {
                  puVar3 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                  goto LAB_07710de4;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar3 = (undefined8 *)FUN_03f95da8(plVar5,DAT_091869d8,1);
LAB_07710de4:
            uVar4 = (*(code *)*puVar3)(plVar5,puVar3[1]);
            (**(code **)(*param_2 + 0x698))(param_2,uVar4,*(undefined8 *)(*param_2 + 0x6a0));
          }
          lVar7 = *plVar5;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == DAT_091869d8) {
                puVar3 = (undefined8 *)(lVar7 + (long)(*piVar10 + 3) * 0x10 + 0x138);
                goto LAB_07710e58;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f95da8(plVar5,DAT_091869d8,3);
LAB_07710e58:
          uVar4 = (*(code *)*puVar3)(plVar5,puVar3[1]);
          uVar9 = Newtonsoft_Json_Utilities_StringUtils__IsNullOrEmpty(uVar4,0);
          if ((uVar9 & 1) != 0) goto LAB_07710f04;
          (**(code **)(*param_2 + 0x5d8))(param_2,DAT_091fae28,*(undefined8 *)(*param_2 + 0x5e0));
          lVar8 = *plVar5;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          lVar7 = DAT_091869d8;
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == DAT_091869d8) goto LAB_07710ed0;
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          goto LAB_07710ec0;
        }
        if (iVar1 != 0xb) goto LAB_077117a4;
      }
      param_5 = param_5 & 1;
LAB_0771046c:
      Newtonsoft_Json_Converters_XmlNodeConverter__SerializeGroupedNodes
                (param_1,param_2,param_3,param_4,param_5);
      return;
    }
    if (1 < iVar1 - 0xdU) {
      if (iVar1 != 0x11) goto LAB_077117a4;
      plVar5 = (long *)thunk_FUN_03f99350(param_3,DAT_091869c8);
      if (plVar5 == (long *)0x0) {
LAB_07711798:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(param_3,lVar7);
      }
      uVar4 = Newtonsoft_Json_Converters_XmlNodeConverter__GetPropertyName(plVar5,param_3,param_4);
      if (param_2 == (long *)0x0) goto LAB_07711748;
      (**(code **)(*param_2 + 0x5d8))(param_2,uVar4,*(undefined8 *)(*param_2 + 0x5e0));
      (**(code **)(*param_2 + 0x578))(param_2,*(undefined8 *)(*param_2 + 0x580));
      lVar7 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_091869c8) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_077108c8;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar5,DAT_091869c8,0);
LAB_077108c8:
      uVar4 = (*(code *)*puVar3)(plVar5,puVar3[1]);
      uVar9 = Newtonsoft_Json_Utilities_StringUtils__IsNullOrEmpty(uVar4,0);
      if ((uVar9 & 1) == 0) {
        (**(code **)(*param_2 + 0x5d8))(param_2,DAT_091fae60,*(undefined8 *)(*param_2 + 0x5e0));
        lVar7 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == DAT_091869c8) {
              puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_07710a04;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(plVar5,DAT_091869c8,0);
LAB_07710a04:
        uVar4 = (*(code *)*puVar3)(plVar5,puVar3[1]);
        (**(code **)(*param_2 + 0x698))(param_2,uVar4,*(undefined8 *)(*param_2 + 0x6a0));
      }
      lVar7 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_091869c8) {
            puVar3 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_07710a78;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar5,DAT_091869c8,1);
LAB_07710a78:
      uVar4 = (*(code *)*puVar3)(plVar5,puVar3[1]);
      uVar9 = Newtonsoft_Json_Utilities_StringUtils__IsNullOrEmpty(uVar4,0);
      if ((uVar9 & 1) == 0) {
        (**(code **)(*param_2 + 0x5d8))(param_2,DAT_091fae20,*(undefined8 *)(*param_2 + 0x5e0));
        lVar7 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == DAT_091869c8) {
              puVar3 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto LAB_07710b00;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(plVar5,DAT_091869c8,1);
LAB_07710b00:
        uVar4 = (*(code *)*puVar3)(plVar5,puVar3[1]);
        (**(code **)(*param_2 + 0x698))(param_2,uVar4,*(undefined8 *)(*param_2 + 0x6a0));
      }
      lVar7 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_091869c8) {
            puVar3 = (undefined8 *)(lVar7 + (long)(*piVar10 + 3) * 0x10 + 0x138);
            goto LAB_07710b74;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar5,DAT_091869c8,3);
LAB_07710b74:
      uVar4 = (*(code *)*puVar3)(plVar5,puVar3[1]);
      uVar9 = Newtonsoft_Json_Utilities_StringUtils__IsNullOrEmpty(uVar4,0);
      if ((uVar9 & 1) != 0) goto LAB_07710f04;
      (**(code **)(*param_2 + 0x5d8))(param_2,DAT_091fae50,*(undefined8 *)(*param_2 + 0x5e0));
      lVar8 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      lVar7 = DAT_091869c8;
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_091869c8) goto LAB_07710ed0;
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
LAB_07710ec0:
      puVar3 = (undefined8 *)FUN_03f95da8(plVar5,lVar7,3);
      goto LAB_07710ee0;
    }
  }
  lVar7 = *param_3;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == DAT_091869f8) {
        puVar3 = (undefined8 *)(lVar7 + (long)(*piVar10 + 8) * 0x10 + 0x138);
        goto LAB_077105e0;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar3 = (undefined8 *)FUN_03f95da8(param_3,DAT_091869f8,8);
LAB_077105e0:
  uVar4 = (*(code *)*puVar3)(param_3,puVar3[1]);
  uVar9 = System_String__op_Equality(uVar4,DAT_0921ceb0,0);
  if ((uVar9 & 1) != 0) {
    lVar7 = *param_3;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_091869f8) {
          puVar3 = (undefined8 *)(lVar7 + (long)(*piVar10 + 5) * 0x10 + 0x138);
          goto LAB_077106f0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(param_3,DAT_091869f8,5);
LAB_077106f0:
    uVar4 = (*(code *)*puVar3)(param_3,puVar3[1]);
    uVar9 = System_String__op_Equality(uVar4,DAT_0921ce18,0);
    if ((uVar9 & 1) != 0) {
      return;
    }
  }
  lVar7 = *param_3;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == DAT_091869f8) {
        puVar3 = (undefined8 *)(lVar7 + (long)(*piVar10 + 8) * 0x10 + 0x138);
        goto LAB_07710764;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar3 = (undefined8 *)FUN_03f95da8(param_3,DAT_091869f8,8);
LAB_07710764:
  uVar4 = (*(code *)*puVar3)(param_3,puVar3[1]);
  uVar9 = System_String__op_Equality(uVar4,DAT_0921ce18,0);
  if ((uVar9 & 1) != 0) {
    lVar7 = *param_3;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_091869f8) {
          puVar3 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_077107d8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(param_3,DAT_091869f8,1);
LAB_077107d8:
    uVar4 = (*(code *)*puVar3)(param_3,puVar3[1]);
    uVar9 = System_String__op_Equality(uVar4,DAT_091fbeb0,0);
    if ((uVar9 & 1) != 0) {
      return;
    }
  }
  if ((param_5 & 1) != 0) {
    uVar4 = Newtonsoft_Json_Converters_XmlNodeConverter__GetPropertyName(uVar9,param_3,param_4);
    if (param_2 == (long *)0x0) goto LAB_07711748;
    (**(code **)(*param_2 + 0x5d8))(param_2,uVar4,*(undefined8 *)(*param_2 + 0x5e0));
  }
  lVar7 = *param_3;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == DAT_091869f8) {
        puVar3 = (undefined8 *)(lVar7 + (long)(*piVar10 + 5) * 0x10 + 0x138);
        goto LAB_07710878;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar3 = (undefined8 *)FUN_03f95da8(param_3,DAT_091869f8,5);
LAB_07710878:
  uVar4 = (*(code *)*puVar3)(param_3,puVar3[1]);
  if (param_2 != (long *)0x0) {
    uVar6 = *(undefined8 *)(*param_2 + 0x6a0);
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x698);
LAB_07710898:
                    /* WARNING: Could not recover jumptable at 0x077108b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_2,uVar4,uVar6);
    return;
  }
LAB_07711748:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
LAB_07710ed0:
  puVar3 = (undefined8 *)(lVar8 + (long)(*piVar10 + 3) * 0x10 + 0x138);
LAB_07710ee0:
  uVar4 = (*(code *)*puVar3)(plVar5,puVar3[1]);
  (**(code **)(*param_2 + 0x698))(param_2,uVar4,*(undefined8 *)(*param_2 + 0x6a0));
LAB_07710f04:
                    /* WARNING: Could not recover jumptable at 0x07710f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x588))(param_2,*(undefined8 *)(*param_2 + 0x590));
  return;
}

