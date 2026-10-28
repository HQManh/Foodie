// rea decompile_all
// name: Newtonsoft.Json.JsonValidatingReader$$ValidateCurrentToken
// address: 0x76735b4
// body: available
// range: 0x76735b4-0x767496f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76737f8 to 0x7671c8c Newtonsoft.Json.JsonValidatingReader$$Pop (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7673a58 to 0x7675638 Newtonsoft.Json.JsonValidatingReader$$WriteToken (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76748f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76748f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76748f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76748fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7674900 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7674904 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7674908 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x767490c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7674910 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7674914 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verific
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x076748a4) */
/* WARNING: Removing unreachable block (ram,0x07674934) */

void Newtonsoft_Json_JsonValidatingReader__ValidateCurrentToken(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  int *piVar9;
  
  if ((DAT_0952249e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091cb228);
    FUN_03f5c2a4(&DAT_091cb4f8);
    FUN_03f5c2a4(&DAT_09178c98);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a5e0);
    FUN_03f5c2a4(&DAT_0917acb0);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091873e8);
    FUN_03f5c2a4(&DAT_091d1f38);
    FUN_03f5c2a4(&DAT_091d1f48);
    FUN_03f5c2a4(&DAT_09192048);
    DAT_0952249e = 1;
  }
  if (*(long *)(param_1 + 0x90) == 0) {
    lVar2 = thunk_FUN_03f9944c(DAT_091873e8);
    Newtonsoft_Json_Schema_JsonSchemaModelBuilder___ctor(lVar2,0);
    if (lVar2 == 0) goto LAB_07674910;
    uVar3 = Newtonsoft_Json_Schema_JsonSchemaModelBuilder__Build
                      (lVar2,*(undefined8 *)(param_1 + 0x88),0);
    *(undefined8 *)(param_1 + 0x90) = uVar3;
    thunk_FUN_03f5d7b8((long *)(param_1 + 0x90),uVar3);
    plVar4 = *(long **)(param_1 + 0x78);
    if (plVar4 == (long *)0x0) goto LAB_07674910;
    uVar3 = (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240));
    uVar5 = Newtonsoft_Json_Utilities_JsonTokenUtils__IsStartToken(uVar3,0);
    if ((uVar5 & 1) == 0) {
      uVar3 = Newtonsoft_Json_JsonValidatingReader__get_CurrentMemberSchemas(param_1);
      uVar6 = thunk_FUN_03f9944c(DAT_09192048);
      Newtonsoft_Json_JsonValidatingReader_SchemaScope___ctor(uVar6,0,uVar3);
      Newtonsoft_Json_JsonValidatingReader__Push(param_1,uVar6);
    }
  }
  plVar4 = *(long **)(param_1 + 0x78);
  if (plVar4 == (long *)0x0) goto LAB_07674910;
  uVar1 = (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240));
  switch(uVar1) {
  case 0:
    goto switchD_07673748_caseD_0;
  case 1:
    Newtonsoft_Json_JsonValidatingReader__ProcessValue(param_1);
    uVar3 = Newtonsoft_Json_JsonValidatingReader__get_CurrentMemberSchemas(param_1);
    uVar6 = thunk_FUN_03f9944c(DAT_09178c98);
    FUN_05322d94(uVar6,param_1,DAT_091d1f48,0);
    uVar3 = FUN_04b0cafc(uVar3,uVar6,DAT_091cb4f8);
    uVar6 = FUN_04b08b78(uVar3,DAT_091cb228);
    uVar3 = thunk_FUN_03f9944c(DAT_09192048);
    uVar8 = 1;
    goto LAB_076739f0;
  case 2:
    Newtonsoft_Json_JsonValidatingReader__ProcessValue(param_1);
    uVar3 = Newtonsoft_Json_JsonValidatingReader__get_CurrentMemberSchemas(param_1);
    uVar6 = thunk_FUN_03f9944c(DAT_09178c98);
    FUN_05322d94(uVar6,param_1,DAT_091d1f38,0);
    uVar3 = FUN_04b0cafc(uVar3,uVar6,DAT_091cb4f8);
    uVar6 = FUN_04b08b78(uVar3,DAT_091cb228);
    uVar3 = thunk_FUN_03f9944c(DAT_09192048);
    uVar8 = 2;
LAB_076739f0:
    Newtonsoft_Json_JsonValidatingReader_SchemaScope___ctor(uVar3,uVar8,uVar6);
LAB_07673a34:
    Newtonsoft_Json_JsonValidatingReader__Push(param_1,uVar3);
    if (*(long *)(param_1 + 0x98) != 0) {
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x98) + 0x18);
LAB_07673a44:
      Newtonsoft_Json_JsonValidatingReader__WriteToken(param_1,uVar3);
      return;
    }
    break;
  case 3:
    Newtonsoft_Json_JsonValidatingReader__ProcessValue(param_1);
    uVar3 = thunk_FUN_03f9944c(DAT_09192048);
    Newtonsoft_Json_JsonValidatingReader_SchemaScope___ctor(uVar3,3,0);
    goto LAB_07673a34;
  case 4:
    if (*(long *)(param_1 + 0x98) != 0) {
      Newtonsoft_Json_JsonValidatingReader__WriteToken
                (param_1,*(undefined8 *)(*(long *)(param_1 + 0x98) + 0x18));
      if ((*(long *)(param_1 + 0x98) != 0) &&
         (plVar4 = *(long **)(*(long *)(param_1 + 0x98) + 0x18), plVar4 != (long *)0x0)) {
        lVar2 = *plVar4;
        uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar5 != 0) {
          piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_0917a5e0) {
              puVar7 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_07673d30;
            }
            uVar5 = uVar5 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar5 != 0);
        }
        puVar7 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917a5e0,0);
LAB_07673d30:
        plVar4 = (long *)(*(code *)*puVar7)(plVar4,puVar7[1]);
        do {
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar2 = *plVar4;
          uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
          if (uVar5 != 0) {
            piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == DAT_09185b10) {
                puVar7 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_07673dac;
              }
              uVar5 = uVar5 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar5 != 0);
          }
          puVar7 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185b10,0);
LAB_07673dac:
          uVar5 = (*(code *)*puVar7)(plVar4,puVar7[1]);
          if ((uVar5 & 1) == 0) {
            if (plVar4 == (long *)0x0) {
              return;
            }
            lVar2 = *plVar4;
            uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
            if (uVar5 == 0) goto LAB_07673e78;
            piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            goto LAB_07673e60;
          }
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar2 = *plVar4;
          uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
          if (uVar5 != 0) {
            piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == DAT_0917acb0) {
                puVar7 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_07673e10;
              }
              uVar5 = uVar5 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar5 != 0);
          }
          puVar7 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917acb0,0);
LAB_07673e10:
          uVar3 = (*(code *)*puVar7)(plVar4,puVar7[1]);
          Newtonsoft_Json_JsonValidatingReader__ValidatePropertyName(param_1,uVar3);
        } while( true );
      }
    }
    break;
  default:
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar3 = thunk_FUN_03f9944c();
    System_ArgumentOutOfRangeException___ctor(uVar3,0);
    uVar6 = thunk_FUN_03fc39d4(&DAT_091d1f40);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar3,uVar6);
  case 6:
    Newtonsoft_Json_JsonValidatingReader__ProcessValue(param_1);
    return;
  case 7:
    Newtonsoft_Json_JsonValidatingReader__ProcessValue(param_1);
    uVar3 = Newtonsoft_Json_JsonValidatingReader__get_CurrentMemberSchemas(param_1);
    Newtonsoft_Json_JsonValidatingReader__WriteToken(param_1,uVar3);
    plVar4 = (long *)Newtonsoft_Json_JsonValidatingReader__get_CurrentMemberSchemas(param_1);
    if (plVar4 != (long *)0x0) {
      lVar2 = *plVar4;
      uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar5 != 0) {
        piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_0917a5e0) {
            puVar7 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_07673a68;
          }
          uVar5 = uVar5 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar5 != 0);
      }
      puVar7 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917a5e0,0);
LAB_07673a68:
      plVar4 = (long *)(*(code *)*puVar7)(plVar4,puVar7[1]);
      do {
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar2 = *plVar4;
        uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar5 != 0) {
          piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_09185b10) {
              puVar7 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_07673ae4;
            }
            uVar5 = uVar5 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar5 != 0);
        }
        puVar7 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185b10,0);
LAB_07673ae4:
        uVar5 = (*(code *)*puVar7)(plVar4,puVar7[1]);
        if ((uVar5 & 1) == 0) {
          if (plVar4 == (long *)0x0) {
            return;
          }
          lVar2 = *plVar4;
          uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
          if (uVar5 == 0) goto LAB_07673bb0;
          piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          goto LAB_07673b98;
        }
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar2 = *plVar4;
        uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar5 != 0) {
          piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_0917acb0) {
              puVar7 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_07673b48;
            }
            uVar5 = uVar5 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar5 != 0);
        }
        puVar7 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917acb0,0);
LAB_07673b48:
        uVar3 = (*(code *)*puVar7)(plVar4,puVar7[1]);
        Newtonsoft_Json_JsonValidatingReader__ValidateInteger(param_1,uVar3);
      } while( true );
    }
    break;
  case 8:
    Newtonsoft_Json_JsonValidatingReader__ProcessValue(param_1);
    uVar3 = Newtonsoft_Json_JsonValidatingReader__get_CurrentMemberSchemas(param_1);
    Newtonsoft_Json_JsonValidatingReader__WriteToken(param_1,uVar3);
    plVar4 = (long *)Newtonsoft_Json_JsonValidatingReader__get_CurrentMemberSchemas(param_1);
    if (plVar4 != (long *)0x0) {
      lVar2 = *plVar4;
      uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar5 != 0) {
        piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_0917a5e0) {
            puVar7 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_07673f28;
          }
          uVar5 = uVar5 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar5 != 0);
      }
      puVar7 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917a5e0,0);
LAB_07673f28:
      plVar4 = (long *)(*(code *)*puVar7)(plVar4,puVar7[1]);
      do {
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar2 = *plVar4;
        uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar5 != 0) {
          piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_09185b10) {
              puVar7 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_07673fa4;
            }
            uVar5 = uVar5 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar5 != 0);
        }
        puVar7 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185b10,0);
LAB_07673fa4:
        uVar5 = (*(code *)*puVar7)(plVar4,puVar7[1]);
        if ((uVar5 & 1) == 0) {
          if (plVar4 == (long *)0x0) {
            return;
          }
          lVar2 = *plVar4;
          uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
          if (uVar5 == 0) goto LAB_07674070;
          piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          goto LAB_07674058;
        }
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar2 = *plVar4;
        uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar5 != 0) {
          piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_0917acb0) {
              puVar7 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_07674008;
            }
            uVar5 = uVar5 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar5 != 0);
        }
        puVar7 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917acb0,0);
LAB_07674008:
        uVar3 = (*(code *)*puVar7)(plVar4,puVar7[1]);
        Newtonsoft_Json_JsonValidatingReader__ValidateFloat(param_1,uVar3);
      } while( true );
    }
    break;
  case 9:
    Newtonsoft_Json_JsonValidatingReader__ProcessValue(param_1);
    uVar3 = Newtonsoft_Json_JsonValidatingReader__get_CurrentMemberSchemas(param_1);
    Newtonsoft_Json_JsonValidatingReader__WriteToken(param_1,uVar3);
    plVar4 = (long *)Newtonsoft_Json_JsonValidatingReader__get_CurrentMemberSchemas(param_1);
    if (plVar4 != (long *)0x0) {
      lVar2 = *plVar4;
      uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar5 != 0) {
        piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_0917a5e0) {
            puVar7 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_07674120;
          }
          uVar5 = uVar5 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar5 != 0);
      }
      puVar7 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917a5e0,0);
LAB_07674120:
      plVar4 = (long *)(*(code *)*puVar7)(plVar4,puVar7[1]);
      do {
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar2 = *plVar4;
        uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar5 != 0) {
          piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_09185b10) {
              puVar7 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_0767419c;
            }
            uVar5 = uVar5 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar5 != 0);
        }
        puVar7 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185b10,0);
LAB_0767419c:
        uVar5 = (*(code *)*puVar7)(plVar4,puVar7[1]);
        if ((uVar5 & 1) == 0) {
          if (plVar4 == (long *)0x0) {
            return;
          }
          lVar2 = *plVar4;
          uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
          if (uVar5 == 0) goto LAB_07674268;
          piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          goto LAB_07674250;
        }
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar2 = *plVar4;
        uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar5 != 0) {
          piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_0917acb0) {
              puVar7 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_07674200;
            }
            uVar5 = uVar5 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar5 != 0);
        }
        puVar7 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917acb0,0);
LAB_07674200:
        uVar3 = (*(code *)*puVar7)(plVar4,puVar7[1]);
        Newtonsoft_Json_JsonValidatingReader__ValidateString(param_1,uVar3);
      } while( true );
    }
    break;
  case 10:
    Newtonsoft_Json_JsonValidatingReader__ProcessValue(param_1);
    uVar3 = Newtonsoft_Json_JsonValidatingReader__get_CurrentMemberSchemas(param_1);
    Newtonsoft_Json_JsonValidatingReader__WriteToken(param_1,uVar3);
    plVar4 = (long *)Newtonsoft_Json_JsonValidatingReader__get_CurrentMemberSchemas(param_1);
    if (plVar4 != (long *)0x0) {
      lVar2 = *plVar4;
      uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar5 != 0) {
        piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_0917a5e0) {
            puVar7 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_07674318;
          }
          uVar5 = uVar5 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar5 != 0);
      }
      puVar7 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917a5e0,0);
LAB_07674318:
      plVar4 = (long *)(*(code *)*puVar7)(plVar4,puVar7[1]);
      do {
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar2 = *plVar4;
        uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar5 != 0) {
          piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_09185b10) {
              puVar7 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_07674394;
            }
            uVar5 = uVar5 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar5 != 0);
        }
        puVar7 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185b10,0);
LAB_07674394:
        uVar5 = (*(code *)*puVar7)(plVar4,puVar7[1]);
        if ((uVar5 & 1) == 0) {
          if (plVar4 == (long *)0x0) {
            return;
          }
          lVar2 = *plVar4;
          uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
          if (uVar5 == 0) goto LAB_07674460;
          piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          goto LAB_07674448;
        }
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar2 = *plVar4;
        uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar5 != 0) {
          piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_0917acb0) {
              puVar7 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_076743f8;
            }
            uVar5 = uVar5 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar5 != 0);
        }
        puVar7 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917acb0,0);
LAB_076743f8:
        uVar3 = (*(code *)*puVar7)(plVar4,puVar7[1]);
        Newtonsoft_Json_JsonValidatingReader__ValidateBoolean(param_1,uVar3);
      } while( true );
    }
    break;
  case 0xb:
    Newtonsoft_Json_JsonValidatingReader__ProcessValue(param_1);
    uVar3 = Newtonsoft_Json_JsonValidatingReader__get_CurrentMemberSchemas(param_1);
    Newtonsoft_Json_JsonValidatingReader__WriteToken(param_1,uVar3);
    plVar4 = (long *)Newtonsoft_Json_JsonValidatingReader__get_CurrentMemberSchemas(param_1);
    if (plVar4 != (long *)0x0) {
      lVar2 = *plVar4;
      uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar5 != 0) {
        piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_0917a5e0) {
            puVar7 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_07674510;
          }
          uVar5 = uVar5 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar5 != 0);
      }
      puVar7 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917a5e0,0);
LAB_07674510:
      plVar4 = (long *)(*(code *)*puVar7)(plVar4,puVar7[1]);
      do {
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar2 = *plVar4;
        uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar5 != 0) {
          piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_09185b10) {
              puVar7 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_0767458c;
            }
            uVar5 = uVar5 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar5 != 0);
        }
        puVar7 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185b10,0);
LAB_0767458c:
        uVar5 = (*(code *)*puVar7)(plVar4,puVar7[1]);
        if ((uVar5 & 1) == 0) {
          if (plVar4 == (long *)0x0) {
            return;
          }
          lVar2 = *plVar4;
          uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
          if (uVar5 == 0) goto LAB_07674658;
          piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          goto LAB_07674640;
        }
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar2 = *plVar4;
        uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar5 != 0) {
          piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_0917acb0) {
              puVar7 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_076745f0;
            }
            uVar5 = uVar5 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar5 != 0);
        }
        puVar7 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917acb0,0);
LAB_076745f0:
        uVar3 = (*(code *)*puVar7)(plVar4,puVar7[1]);
        Newtonsoft_Json_JsonValidatingReader__ValidateNull(param_1,uVar3);
      } while( true );
    }
    break;
  case 0xc:
  case 0x10:
  case 0x11:
    uVar3 = Newtonsoft_Json_JsonValidatingReader__get_CurrentMemberSchemas(param_1);
    goto LAB_07673a44;
  case 0xd:
    if (*(long *)(param_1 + 0x98) != 0) {
      Newtonsoft_Json_JsonValidatingReader__WriteToken
                (param_1,*(undefined8 *)(*(long *)(param_1 + 0x98) + 0x18));
      if ((*(long *)(param_1 + 0x98) != 0) &&
         (plVar4 = *(long **)(*(long *)(param_1 + 0x98) + 0x18), plVar4 != (long *)0x0)) {
        lVar2 = *plVar4;
        uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar5 != 0) {
          piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_0917a5e0) {
              puVar7 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_07674700;
            }
            uVar5 = uVar5 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar5 != 0);
        }
        puVar7 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917a5e0,0);
LAB_07674700:
        plVar4 = (long *)(*(code *)*puVar7)(plVar4,puVar7[1]);
        do {
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar2 = *plVar4;
          uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
          if (uVar5 != 0) {
            piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == DAT_09185b10) {
                puVar7 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_0767477c;
              }
              uVar5 = uVar5 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar5 != 0);
          }
          puVar7 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185b10,0);
LAB_0767477c:
          uVar5 = (*(code *)*puVar7)(plVar4,puVar7[1]);
          if ((uVar5 & 1) == 0) {
            if (plVar4 == (long *)0x0) goto LAB_076748a8;
            lVar2 = *plVar4;
            uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
            if (uVar5 == 0) goto LAB_07674848;
            piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            goto LAB_07674830;
          }
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar2 = *plVar4;
          uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
          if (uVar5 != 0) {
            piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == DAT_0917acb0) {
                puVar7 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_076747e0;
              }
              uVar5 = uVar5 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar5 != 0);
          }
          puVar7 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917acb0,0);
LAB_076747e0:
          uVar3 = (*(code *)*puVar7)(plVar4,puVar7[1]);
          Newtonsoft_Json_JsonValidatingReader__ValidateEndObject(param_1,uVar3);
        } while( true );
      }
    }
    break;
  case 0xe:
    if (*(long *)(param_1 + 0x98) != 0) {
      Newtonsoft_Json_JsonValidatingReader__WriteToken
                (param_1,*(undefined8 *)(*(long *)(param_1 + 0x98) + 0x18));
      if ((*(long *)(param_1 + 0x98) != 0) &&
         (plVar4 = *(long **)(*(long *)(param_1 + 0x98) + 0x18), plVar4 != (long *)0x0)) {
        lVar2 = *plVar4;
        uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar5 != 0) {
          piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_0917a5e0) {
              puVar7 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_07673bcc;
            }
            uVar5 = uVar5 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar5 != 0);
        }
        puVar7 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917a5e0,0);
LAB_07673bcc:
        plVar4 = (long *)(*(code *)*puVar7)(plVar4,puVar7[1]);
        do {
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar2 = *plVar4;
          uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
          if (uVar5 != 0) {
            piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == DAT_09185b10) {
                puVar7 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_07673c48;
              }
              uVar5 = uVar5 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar5 != 0);
          }
          puVar7 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185b10,0);
LAB_07673c48:
          uVar5 = (*(code *)*puVar7)(plVar4,puVar7[1]);
          if ((uVar5 & 1) == 0) {
            if (plVar4 == (long *)0x0) goto LAB_076748a8;
            lVar2 = *plVar4;
            uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
            if (uVar5 == 0) goto LAB_07673d14;
            piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            goto LAB_07673cfc;
          }
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar2 = *plVar4;
          uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
          if (uVar5 != 0) {
            piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == DAT_0917acb0) {
                puVar7 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_07673cac;
              }
              uVar5 = uVar5 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar5 != 0);
          }
          puVar7 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917acb0,0);
LAB_07673cac:
          uVar3 = (*(code *)*puVar7)(plVar4,puVar7[1]);
          Newtonsoft_Json_JsonValidatingReader__ValidateEndArray(param_1,uVar3);
        } while( true );
      }
    }
    break;
  case 0xf:
    if (*(long *)(param_1 + 0x98) != 0) {
      Newtonsoft_Json_JsonValidatingReader__WriteToken
                (param_1,*(undefined8 *)(*(long *)(param_1 + 0x98) + 0x18));
      Newtonsoft_Json_JsonValidatingReader__Pop(param_1);
      return;
    }
  }
LAB_07674910:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar9 = piVar9 + 4;
    if (uVar5 == 0) break;
LAB_07673cfc:
    if (*(long *)(piVar9 + -2) == DAT_09185a58) {
      puVar7 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_0767488c;
    }
  }
LAB_07673d14:
  puVar7 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185a58,0);
LAB_0767488c:
  (*(code *)*puVar7)(plVar4,puVar7[1]);
  goto LAB_076748a8;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar9 = piVar9 + 4;
    if (uVar5 == 0) break;
LAB_07674640:
    if (*(long *)(piVar9 + -2) == DAT_09185a58) {
      puVar7 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_07674674;
    }
  }
LAB_07674658:
  puVar7 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185a58,0);
LAB_07674674:
  (*(code *)*puVar7)(plVar4,puVar7[1]);
  return;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar9 = piVar9 + 4;
    if (uVar5 == 0) break;
LAB_07674448:
    if (*(long *)(piVar9 + -2) == DAT_09185a58) {
      puVar7 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_0767447c;
    }
  }
LAB_07674460:
  puVar7 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185a58,0);
LAB_0767447c:
  (*(code *)*puVar7)(plVar4,puVar7[1]);
  return;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar9 = piVar9 + 4;
    if (uVar5 == 0) break;
LAB_07674250:
    if (*(long *)(piVar9 + -2) == DAT_09185a58) {
      puVar7 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_07674284;
    }
  }
LAB_07674268:
  puVar7 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185a58,0);
LAB_07674284:
  (*(code *)*puVar7)(plVar4,puVar7[1]);
  return;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar9 = piVar9 + 4;
    if (uVar5 == 0) break;
LAB_07674058:
    if (*(long *)(piVar9 + -2) == DAT_09185a58) {
      puVar7 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_0767408c;
    }
  }
LAB_07674070:
  puVar7 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185a58,0);
LAB_0767408c:
  (*(code *)*puVar7)(plVar4,puVar7[1]);
  return;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar9 = piVar9 + 4;
    if (uVar5 == 0) break;
LAB_07673b98:
    if (*(long *)(piVar9 + -2) == DAT_09185a58) {
      puVar7 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_07673e94;
    }
  }
LAB_07673bb0:
  puVar7 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185a58,0);
LAB_07673e94:
  (*(code *)*puVar7)(plVar4,puVar7[1]);
  return;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar9 = piVar9 + 4;
    if (uVar5 == 0) break;
LAB_07673e60:
    if (*(long *)(piVar9 + -2) == DAT_09185a58) {
      puVar7 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_076748c0;
    }
  }
LAB_07673e78:
  puVar7 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185a58,0);
LAB_076748c0:
  (*(code *)*puVar7)(plVar4,puVar7[1]);
switchD_07673748_caseD_0:
  return;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar9 = piVar9 + 4;
    if (uVar5 == 0) break;
LAB_07674830:
    if (*(long *)(piVar9 + -2) == DAT_09185a58) {
      puVar7 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_07674864;
    }
  }
LAB_07674848:
  puVar7 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185a58,0);
LAB_07674864:
  (*(code *)*puVar7)(plVar4,puVar7[1]);
LAB_076748a8:
  Newtonsoft_Json_JsonValidatingReader__Pop(param_1);
  return;
}

