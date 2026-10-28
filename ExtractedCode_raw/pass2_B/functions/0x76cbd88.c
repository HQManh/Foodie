// rea decompile_all
// name: Newtonsoft.Json.Schema.JsonSchemaBuilder$$ProcessSchemaProperties
// address: 0x76cbd88
// body: available
// range: 0x76cbd88-0x76ccd3f inclusive
// range: 0x76ccf38-0x76ccfcf inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76cccd0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76cccd4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76cccd8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76cccdc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76ccce0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76ccce4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76ccce8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76cccec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76cccf0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76cccf4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76cccf8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76cccfc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Schema_JsonSchemaBuilder__ProcessSchemaProperties(long param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  undefined1 auVar11 [16];
  ulong local_90;
  undefined8 uStack_88;
  long local_78;
  long **local_70;
  long *local_68;
  
  if ((DAT_09522739 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a928);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09187250);
    FUN_03f5c2a4(&DAT_091a9840);
    FUN_03f5c2a4(&DAT_091a9848);
    FUN_03f5c2a4(&DAT_091b6f98);
    FUN_03f5c2a4(&DAT_091b6a48);
    FUN_03f5c2a4(&DAT_091b6d48);
    FUN_03f5c2a4(&DAT_0921cb60);
    FUN_03f5c2a4(&DAT_0921f750);
    FUN_03f5c2a4(&DAT_092215f0);
    FUN_03f5c2a4(&DAT_0921a8f0);
    FUN_03f5c2a4(&DAT_0921b040);
    FUN_03f5c2a4(&DAT_0921f6f0);
    FUN_03f5c2a4(&DAT_09221980);
    FUN_03f5c2a4(&DAT_09217220);
    FUN_03f5c2a4(&DAT_0921f6f8);
    FUN_03f5c2a4(&DAT_092247c0);
    FUN_03f5c2a4(&DAT_0921a3f8);
    FUN_03f5c2a4(&DAT_0921b2d8);
    FUN_03f5c2a4(&DAT_0921ba70);
    FUN_03f5c2a4(&DAT_0921a800);
    FUN_03f5c2a4(&DAT_092211f8);
    FUN_03f5c2a4(&DAT_0921d180);
    FUN_03f5c2a4(&DAT_09221970);
    FUN_03f5c2a4(&DAT_09217238);
    FUN_03f5c2a4(&DAT_0921b2d0);
    FUN_03f5c2a4(&DAT_0921f3b8);
    FUN_03f5c2a4(&DAT_09223f50);
    FUN_03f5c2a4(&DAT_0921f318);
    FUN_03f5c2a4(&DAT_0921b378);
    FUN_03f5c2a4(&DAT_09220b88);
    FUN_03f5c2a4(&DAT_0921a580);
    FUN_03f5c2a4(&DAT_0921f310);
    FUN_03f5c2a4(&DAT_09220b90);
    FUN_03f5c2a4(&DAT_0921dcf0);
    FUN_03f5c2a4(&DAT_09224510);
    DAT_09522739 = 1;
  }
  local_68 = (long *)0x0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar4 = (long *)Newtonsoft_Json_Linq_JObject__GetEnumerator(param_2,0);
  local_70 = &local_68;
  local_78 = 0;
  do {
    local_68 = plVar4;
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_09185b10) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_076cc03c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185b10,0);
LAB_076cc03c:
    uVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    plVar4 = local_68;
    if ((uVar8 & 1) == 0) {
      plVar4 = *local_70;
      if (plVar4 == (long *)0x0) goto LAB_076ccfa4;
      lVar7 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 == 0) goto LAB_076ccf7c;
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar7 = *local_68;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_0917a928) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_076cc0a0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(local_68,DAT_0917a928,0);
LAB_076cc0a0:
    auVar11 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    lVar7 = auVar11._8_8_;
    uVar6 = auVar11._0_8_;
    uVar2 = <PrivateImplementationDetails>__ComputeStringHash(uVar6,0);
    plVar4 = local_68;
    if (uVar2 < 0x848c8621) {
      if (uVar2 < 0x3a793390) {
        if (uVar2 < 0x150efe0e) {
          if (uVar2 == 0x11de6cdc) {
            uVar8 = System_String__op_Equality(uVar6,DAT_092211f8,0);
            plVar4 = local_68;
            if ((uVar8 & 1) != 0) {
              lVar10 = *(long *)(param_1 + 0x28);
              uVar6 = Newtonsoft_Json_Schema_JsonSchemaBuilder__ProcessProperties(param_1,lVar7);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              puVar5 = (undefined8 *)(lVar10 + 0xb8);
              *puVar5 = uVar6;
              thunk_FUN_03f5d7b8(puVar5);
              plVar4 = local_68;
            }
          }
          else if (uVar2 == 0x13f0fb79) {
            uVar8 = System_String__op_Equality(uVar6,DAT_0921f6f0,0);
            plVar4 = local_68;
            if ((uVar8 & 1) != 0) {
              lVar10 = *(long *)(param_1 + 0x28);
              if (*(int *)(DAT_09187250 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar3 = Newtonsoft_Json_Linq_JToken__op_Explicit(lVar7,0);
              local_90 = 0;
              FUN_05c3078c(&local_90,uVar3,DAT_091b6f98);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              *(ulong *)(lVar10 + 0x84) = local_90;
              plVar4 = local_68;
            }
          }
          else if ((uVar2 == 0x150efe0d) &&
                  (uVar8 = System_String__op_Equality(uVar6,DAT_0921a8f0,0), plVar4 = local_68,
                  (uVar8 & 1) != 0)) {
            lVar10 = *(long *)(param_1 + 0x28);
            if (*(int *)(DAT_09187250 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            Newtonsoft_Json_Linq_JToken__op_Explicit(lVar7,0);
            local_90 = 0;
            uStack_88 = 0;
            FUN_05c2dd28(&local_90,DAT_091b6d48);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            *(undefined8 *)(lVar10 + 0x58) = uStack_88;
            *(ulong *)(lVar10 + 0x50) = local_90;
            plVar4 = local_68;
          }
        }
        else if (uVar2 < 0x346f3b6a) {
          if (uVar2 == 0x1c9c30e1) {
            uVar8 = System_String__op_Equality(uVar6,DAT_09217238,0);
            plVar4 = local_68;
            if ((uVar8 & 1) != 0) {
              Newtonsoft_Json_Schema_JsonSchemaBuilder__ProcessAdditionalProperties(param_1,lVar7);
              plVar4 = local_68;
            }
          }
          else if ((uVar2 == 0x346f3b69) &&
                  (uVar8 = System_String__op_Equality(uVar6,DAT_0921a580,0), plVar4 = local_68,
                  (uVar8 & 1) != 0)) {
            lVar10 = *(long *)(param_1 + 0x28);
            if (*(int *)(DAT_09187250 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar6 = Newtonsoft_Json_Linq_JToken__op_Explicit(lVar7,0);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            puVar5 = (undefined8 *)(lVar10 + 0x28);
            *puVar5 = uVar6;
            thunk_FUN_03f5d7b8(puVar5);
            plVar4 = local_68;
          }
        }
        else if (uVar2 == 0x37386ae0) {
          uVar8 = System_String__op_Equality(uVar6,DAT_0921d180,0);
          plVar4 = local_68;
          if ((uVar8 & 1) != 0) {
            lVar10 = *(long *)(param_1 + 0x28);
            if (*(int *)(DAT_09187250 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar6 = Newtonsoft_Json_Linq_JToken__op_Explicit(lVar7,0);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            puVar5 = (undefined8 *)(lVar10 + 0x10);
            *puVar5 = uVar6;
            thunk_FUN_03f5d7b8(puVar5);
            plVar4 = local_68;
          }
        }
        else if ((uVar2 == 0x3a79338f) &&
                (uVar8 = System_String__op_Equality(uVar6,DAT_0921dcf0,0), plVar4 = local_68,
                (uVar8 & 1) != 0)) {
          Newtonsoft_Json_Schema_JsonSchemaBuilder__ProcessItems(param_1,lVar7);
          plVar4 = local_68;
        }
      }
      else if (uVar2 < 0x64f7c28c) {
        if (uVar2 == 0x5127f14d) {
          uVar8 = System_String__op_Equality(uVar6,DAT_09224510,0);
          plVar4 = local_68;
          if ((uVar8 & 1) != 0) {
            lVar10 = *(long *)(param_1 + 0x28);
            uVar6 = Newtonsoft_Json_Schema_JsonSchemaBuilder__ProcessType(uVar8,lVar7);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            *(undefined8 *)(lVar10 + 0x30) = uVar6;
            plVar4 = local_68;
          }
        }
        else if (uVar2 == 0x5bf2f681) {
          uVar8 = System_String__op_Equality(uVar6,DAT_0921f3b8,0);
          plVar4 = local_68;
          if ((uVar8 & 1) != 0) {
            lVar10 = *(long *)(param_1 + 0x28);
            if (*(int *)(DAT_09187250 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            Newtonsoft_Json_Linq_JToken__op_Explicit(lVar7,0);
            local_90 = 0;
            uStack_88 = 0;
            FUN_05c2dd28(&local_90,DAT_091b6d48);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            *(undefined8 *)(lVar10 + 0x78) = uStack_88;
            *(ulong *)(lVar10 + 0x70) = local_90;
            plVar4 = local_68;
          }
        }
        else if ((uVar2 == 0x64f7c28b) &&
                (uVar8 = System_String__op_Equality(uVar6,DAT_0921b2d0,0), plVar4 = local_68,
                (uVar8 & 1) != 0)) {
          lVar10 = *(long *)(param_1 + 0x28);
          if (*(int *)(DAT_09187250 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar2 = Newtonsoft_Json_Linq_JToken__op_Explicit(lVar7,0);
          local_90 = local_90 & 0xffffffffffff0000;
          FUN_05c290f8(&local_90,uVar2 & 1,DAT_091b6a48);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          *(undefined2 *)(lVar10 + 0x82) = (undefined2)local_90;
          plVar4 = local_68;
        }
      }
      else if (uVar2 < 0x7a472401) {
        if (uVar2 == 0x720625cd) {
          uVar8 = System_String__op_Equality(uVar6,DAT_0921b2d8,0);
          plVar4 = local_68;
          if ((uVar8 & 1) != 0) {
            lVar10 = *(long *)(param_1 + 0x28);
            if (*(int *)(DAT_09187250 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar2 = Newtonsoft_Json_Linq_JToken__op_Explicit(lVar7,0);
            local_90 = local_90 & 0xffffffffffff0000;
            FUN_05c290f8(&local_90,uVar2 & 1,DAT_091b6a48);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            *(undefined2 *)(lVar10 + 0x80) = (undefined2)local_90;
            plVar4 = local_68;
          }
        }
        else if ((uVar2 == 0x7a472400) &&
                (uVar8 = System_String__op_Equality(uVar6,DAT_09217220,0), plVar4 = local_68,
                (uVar8 & 1) != 0)) {
          Newtonsoft_Json_Schema_JsonSchemaBuilder__ProcessAdditionalItems(param_1,lVar7);
          plVar4 = local_68;
        }
      }
      else if (uVar2 == 0x816cb000) {
        uVar8 = System_String__op_Equality(uVar6,DAT_0921b040,0);
        plVar4 = local_68;
        if ((uVar8 & 1) != 0) {
          Newtonsoft_Json_Schema_JsonSchemaBuilder__ProcessEnum(param_1,lVar7);
          plVar4 = local_68;
        }
      }
      else if ((uVar2 == 0x848c8620) &&
              (uVar8 = System_String__op_Equality(uVar6,DAT_09221970,0), plVar4 = local_68,
              (uVar8 & 1) != 0)) {
        lVar10 = *(long *)(param_1 + 0x28);
        if (*(int *)(DAT_09187250 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = Newtonsoft_Json_Linq_JToken__op_Explicit(lVar7,0);
        local_90 = local_90 & 0xffffffffffff0000;
        FUN_05c290f8(&local_90,uVar2 & 1,DAT_091b6a48);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        *(undefined2 *)(lVar10 + 0x20) = (undefined2)local_90;
        plVar4 = local_68;
      }
    }
    else if (uVar2 < 0xa07863c1) {
      if (uVar2 < 0x938122f8) {
        if (uVar2 == 0x873d0129) {
          uVar8 = System_String__op_Equality(uVar6,DAT_09220b88,0);
          plVar4 = local_68;
          if ((uVar8 & 1) != 0) {
            lVar10 = *(long *)(param_1 + 0x28);
            if (*(int *)(DAT_09187250 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar6 = Newtonsoft_Json_Linq_JToken__op_Explicit(lVar7,0);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            puVar5 = (undefined8 *)(lVar10 + 0x38);
            *puVar5 = uVar6;
            thunk_FUN_03f5d7b8(puVar5);
            plVar4 = local_68;
          }
        }
        else if (uVar2 == 0x933b5bde) {
          uVar8 = System_String__op_Equality(uVar6,DAT_0921a3f8,0);
          plVar4 = local_68;
          if ((uVar8 & 1) != 0) {
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar10 = *(long *)(param_1 + 0x28);
            uVar6 = Newtonsoft_Json_Linq_JToken__DeepClone(lVar7,0);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            puVar5 = (undefined8 *)(lVar10 + 0xf0);
            *puVar5 = uVar6;
            thunk_FUN_03f5d7b8(puVar5);
            plVar4 = local_68;
          }
        }
        else if ((uVar2 == 0x938122f7) &&
                (uVar8 = System_String__op_Equality(uVar6,DAT_0921f750,0), plVar4 = local_68,
                (uVar8 & 1) != 0)) {
          lVar10 = *(long *)(param_1 + 0x28);
          if (*(int *)(DAT_09187250 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          Newtonsoft_Json_Linq_JToken__op_Explicit(lVar7,0);
          local_90 = 0;
          uStack_88 = 0;
          FUN_05c2dd28(&local_90,DAT_091b6d48);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          *(undefined8 *)(lVar10 + 0x68) = uStack_88;
          *(ulong *)(lVar10 + 0x60) = local_90;
          plVar4 = local_68;
        }
      }
      else if (uVar2 < 0x9b8caa56) {
        if (uVar2 == 0x9865b509) {
          uVar8 = System_String__op_Equality(uVar6,DAT_09223f50,0);
          plVar4 = local_68;
          if ((uVar8 & 1) != 0) {
            lVar10 = *(long *)(param_1 + 0x28);
            if (*(int *)(DAT_09187250 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar6 = Newtonsoft_Json_Linq_JToken__op_Explicit(lVar7,0);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            puVar5 = (undefined8 *)(lVar10 + 0x18);
            *puVar5 = uVar6;
            thunk_FUN_03f5d7b8(puVar5);
            plVar4 = local_68;
          }
        }
        else if ((uVar2 == 0x9b8caa55) &&
                (uVar8 = System_String__op_Equality(uVar6,DAT_09221980,0), plVar4 = local_68,
                (uVar8 & 1) != 0)) {
          lVar10 = *(long *)(param_1 + 0x28);
          if (*(int *)(DAT_09187250 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar6 = Newtonsoft_Json_Linq_JToken__op_Explicit(lVar7,0);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          puVar5 = (undefined8 *)(lVar10 + 0xd8);
          *puVar5 = uVar6;
          thunk_FUN_03f5d7b8(puVar5);
          plVar4 = local_68;
        }
      }
      else if (uVar2 == 0x9d85d64e) {
        uVar8 = System_String__op_Equality(uVar6,DAT_0921b378,0);
        plVar4 = local_68;
        if ((uVar8 & 1) != 0) {
          Newtonsoft_Json_Schema_JsonSchemaBuilder__ProcessExtends(param_1,lVar7);
          plVar4 = local_68;
        }
      }
      else if ((uVar2 == 0xa07863c0) &&
              (uVar8 = System_String__op_Equality(uVar6,DAT_0921a800,0), plVar4 = local_68,
              (uVar8 & 1) != 0)) {
        lVar10 = *(long *)(param_1 + 0x28);
        uVar6 = Newtonsoft_Json_Schema_JsonSchemaBuilder__ProcessType(uVar8,lVar7);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        *(undefined8 *)(lVar10 + 0xe8) = uVar6;
        plVar4 = local_68;
      }
    }
    else if (uVar2 < 0xd1f6a663) {
      if (uVar2 < 0xb99d8553) {
        if (uVar2 == 0xb0443bf7) {
          uVar8 = System_String__op_Equality(uVar6,DAT_0921f6f8,0);
          plVar4 = local_68;
          if ((uVar8 & 1) != 0) {
            lVar10 = *(long *)(param_1 + 0x28);
            if (*(int *)(DAT_09187250 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar3 = Newtonsoft_Json_Linq_JToken__op_Explicit(lVar7,0);
            local_90 = 0;
            FUN_05c3078c(&local_90,uVar3,DAT_091b6f98);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            *(ulong *)(lVar10 + 0x40) = local_90;
            plVar4 = local_68;
          }
        }
        else if ((uVar2 == 0xb99d8552) &&
                (uVar8 = System_String__op_Equality(uVar6,DAT_0921ba70,0), plVar4 = local_68,
                (uVar8 & 1) != 0)) {
          lVar10 = *(long *)(param_1 + 0x28);
          if (*(int *)(DAT_09187250 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar6 = Newtonsoft_Json_Linq_JToken__op_Explicit(lVar7,0);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          *(undefined8 *)(lVar10 + 0x100) = uVar6;
          thunk_FUN_03f5d7b8(lVar10 + 0x100);
          plVar4 = local_68;
        }
      }
      else if (uVar2 == 0xce0beff7) {
        uVar8 = System_String__op_Equality(uVar6,DAT_092215f0,0);
        plVar4 = local_68;
        if ((uVar8 & 1) != 0) {
          lVar10 = *(long *)(param_1 + 0x28);
          if (*(int *)(DAT_09187250 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar2 = Newtonsoft_Json_Linq_JToken__op_Explicit(lVar7,0);
          local_90 = local_90 & 0xffffffffffff0000;
          FUN_05c290f8(&local_90,uVar2 & 1,DAT_091b6a48);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          *(undefined2 *)(lVar10 + 0x22) = (undefined2)local_90;
          plVar4 = local_68;
        }
      }
      else if ((uVar2 == 0xd1f6a662) &&
              (uVar8 = System_String__op_Equality(uVar6,DAT_092247c0,0), plVar4 = local_68,
              (uVar8 & 1) != 0)) {
        lVar10 = *(long *)(param_1 + 0x28);
        if (*(int *)(DAT_09187250 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        bVar1 = Newtonsoft_Json_Linq_JToken__op_Explicit(lVar7,0);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        *(byte *)(lVar10 + 0xb1) = bVar1 & 1;
        plVar4 = local_68;
      }
    }
    else if (uVar2 < 0xeb4bb271) {
      if (uVar2 == 0xd23308c1) {
        uVar8 = System_String__op_Equality(uVar6,DAT_0921f318,0);
        plVar4 = local_68;
        if ((uVar8 & 1) != 0) {
          lVar10 = *(long *)(param_1 + 0x28);
          if (*(int *)(DAT_09187250 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = Newtonsoft_Json_Linq_JToken__op_Explicit(lVar7,0);
          local_90 = 0;
          FUN_05c3078c(&local_90,uVar3,DAT_091b6f98);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          *(ulong *)(lVar10 + 0x48) = local_90;
          plVar4 = local_68;
        }
      }
      else if ((uVar2 == 0xeb4bb270) &&
              (uVar8 = System_String__op_Equality(uVar6,DAT_09220b90,0), plVar4 = local_68,
              (uVar8 & 1) != 0)) {
        lVar10 = *(long *)(param_1 + 0x28);
        uVar6 = Newtonsoft_Json_Schema_JsonSchemaBuilder__ProcessProperties(param_1,lVar7);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        puVar5 = (undefined8 *)(lVar10 + 200);
        *puVar5 = uVar6;
        thunk_FUN_03f5d7b8(puVar5);
        plVar4 = local_68;
      }
    }
    else if (uVar2 == 0xf618f139) {
      uVar8 = System_String__op_Equality(uVar6,DAT_0921cb60,0);
      plVar4 = local_68;
      if ((uVar8 & 1) != 0) {
        lVar10 = *(long *)(param_1 + 0x28);
        if (*(int *)(DAT_09187250 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = Newtonsoft_Json_Linq_JToken__op_Explicit(lVar7,0);
        local_90 = local_90 & 0xffffffffffff0000;
        FUN_05c290f8(&local_90,uVar2 & 1,DAT_091b6a48);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        *(undefined2 *)(lVar10 + 0x24) = (undefined2)local_90;
        plVar4 = local_68;
      }
    }
    else if ((uVar2 == 0xfcfb3733) &&
            (uVar8 = System_String__op_Equality(uVar6,DAT_0921f310,0), plVar4 = local_68,
            (uVar8 & 1) != 0)) {
      lVar10 = *(long *)(param_1 + 0x28);
      if (*(int *)(DAT_09187250 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = Newtonsoft_Json_Linq_JToken__op_Explicit(lVar7,0);
      local_90 = 0;
      FUN_05c3078c(&local_90,uVar3,DAT_091b6f98);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *(ulong *)(lVar10 + 0x8c) = local_90;
      plVar4 = local_68;
    }
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) == DAT_09185a58) {
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_076ccf98;
    }
  }
LAB_076ccf7c:
  puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185a58,0);
LAB_076ccf98:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
LAB_076ccfa4:
  if (local_78 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c548();
  }
  return;
}

