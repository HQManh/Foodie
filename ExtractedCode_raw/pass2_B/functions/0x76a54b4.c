// rea decompile_all
// name: Newtonsoft.Json.Serialization.DefaultContractResolver$$GetCallbackMethodsForType
// address: 0x76a54b4
// body: available
// range: 0x76a54b4-0x76a5d23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76a5cf4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76a5cf8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76a5cfc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76a5d00 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76a5d04 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76a5d08 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76a5d0c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76a5d10 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76a5d14 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76a5d18 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76a5d20 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertio
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Serialization_DefaultContractResolver__GetCallbackMethodsForType
               (undefined8 param_1,undefined8 param_2,long *param_3,long *param_4,long *param_5,
               long *param_6,long *param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *local_c8;
  long local_a0;
  long *plStack_98;
  long *local_90;
  undefined8 local_88;
  long local_80;
  undefined8 uStack_78;
  long *local_70;
  
  if ((DAT_0952262a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183878);
    FUN_03f5c2a4(&DAT_091a4a18);
    FUN_03f5c2a4(&DAT_091a4a20);
    FUN_03f5c2a4(&DAT_091a4a28);
    FUN_03f5c2a4(&DAT_091afd90);
    FUN_03f5c2a4(&DAT_091afd78);
    FUN_03f5c2a4(&DAT_091b11f0);
    FUN_03f5c2a4(&DAT_091afd88);
    FUN_03f5c2a4(&DAT_091afd70);
    FUN_03f5c2a4(&DAT_0917cb70);
    FUN_03f5c2a4(&DAT_0917cb78);
    FUN_03f5c2a4(&DAT_09172630);
    FUN_03f5c2a4(&DAT_09172638);
    FUN_03f5c2a4(&DAT_09172640);
    FUN_03f5c2a4(&DAT_09172648);
    FUN_03f5c2a4(&DAT_09172650);
    DAT_0952262a = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = (long *)0x0;
  local_88 = 0;
  *param_3 = 0;
  thunk_FUN_03f5d7b8(param_3,0);
  *param_4 = 0;
  thunk_FUN_03f5d7b8(param_4,0);
  *param_5 = 0;
  thunk_FUN_03f5d7b8(param_5,0);
  *param_6 = 0;
  thunk_FUN_03f5d7b8(param_6,0);
  *param_7 = 0;
  uVar4 = thunk_FUN_03f5d7b8(param_7,0);
  lVar5 = Newtonsoft_Json_Serialization_DefaultContractResolver__GetClassHierarchyForType
                    (uVar4,param_2);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_057e185c(&local_a0,lVar5,DAT_091b11f0);
  uStack_78 = plStack_98;
  local_80 = local_a0;
  local_70 = local_90;
  local_a0 = 0;
  plStack_98 = &local_80;
  do {
    do {
      uVar6 = FUN_071bd28c(&local_80,DAT_091a4a20);
      plVar9 = local_70;
      lVar5 = local_a0;
      if ((uVar6 & 1) == 0) {
        FUN_071bd288(plStack_98,DAT_091a4a18);
        if (lVar5 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c548(lVar5);
        }
        return;
      }
      if (*(int *)(DAT_09183878 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = Newtonsoft_Json_Serialization_DefaultContractResolver__ShouldSkipSerializing(plVar9);
      uVar3 = Newtonsoft_Json_Serialization_DefaultContractResolver__ShouldSkipDeserialized(plVar9);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar5 = (**(code **)(*plVar9 + 0x7d8))(plVar9,0x36,*(undefined8 *)(*plVar9 + 0x7e0));
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar1 = *(uint *)(lVar5 + 0x18);
    } while ((int)uVar1 < 1);
    uVar10 = 0;
    plVar14 = (long *)0x0;
    plVar16 = (long *)0x0;
    plVar9 = (long *)0x0;
    plVar11 = (long *)0x0;
    local_c8 = (long *)0x0;
    do {
      if (uVar1 <= uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      plVar15 = *(long **)(lVar5 + (long)(int)uVar10 * 8 + 0x20);
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar6 = (**(code **)(*plVar15 + 0x348))(plVar15,*(undefined8 *)(*plVar15 + 0x350));
      if ((uVar6 & 1) == 0) {
        local_88 = 0;
        uVar7 = (**(code **)(*plVar15 + 600))(plVar15,*(undefined8 *)(*plVar15 + 0x260));
        uVar4 = DAT_09172650;
        if ((uVar2 & 1) == 0) {
          if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar4 = System_Type__GetTypeFromHandle(uVar4,0);
          if (*(int *)(DAT_09183878 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar6 = Newtonsoft_Json_Serialization_DefaultContractResolver__IsValidCallback
                            (plVar15,uVar7,uVar4,plVar11,&local_88);
          if ((uVar6 & 1) != 0) {
            lVar12 = *param_3;
            if (lVar12 == 0) {
              lVar12 = thunk_FUN_03f9944c(DAT_0917cb70);
              FUN_057e0400(lVar12,DAT_091afd70);
            }
            *param_3 = lVar12;
            thunk_FUN_03f5d7b8(param_3,lVar12);
            lVar13 = *param_3;
            uVar4 = Newtonsoft_Json_Serialization_JsonContract__CreateSerializationCallback(plVar15)
            ;
            lVar12 = DAT_091afd78;
            if (lVar13 == 0) {
LAB_076a5d08:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar8 = *(long *)(lVar13 + 0x10);
            *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
            if (lVar8 == 0) goto LAB_076a5d08;
            uVar1 = *(uint *)(lVar13 + 0x18);
            plVar11 = plVar15;
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar13 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
              thunk_FUN_03f5d7b8();
            }
            else {
              FUN_057e0c68(lVar13,uVar4,
                           *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
        uVar4 = DAT_09172648;
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = System_Type__GetTypeFromHandle(uVar4,0);
        if (*(int *)(DAT_09183878 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar6 = Newtonsoft_Json_Serialization_DefaultContractResolver__IsValidCallback
                          (plVar15,uVar7,uVar4,plVar9,&local_88);
        if ((uVar6 & 1) != 0) {
          lVar12 = *param_4;
          if (lVar12 == 0) {
            lVar12 = thunk_FUN_03f9944c(DAT_0917cb70);
            FUN_057e0400(lVar12,DAT_091afd70);
          }
          *param_4 = lVar12;
          thunk_FUN_03f5d7b8(param_4,lVar12);
          lVar13 = *param_4;
          uVar4 = Newtonsoft_Json_Serialization_JsonContract__CreateSerializationCallback(plVar15);
          lVar12 = DAT_091afd78;
          if (lVar13 == 0) {
LAB_076a5d00:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar8 = *(long *)(lVar13 + 0x10);
          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
          if (lVar8 == 0) goto LAB_076a5d00;
          uVar1 = *(uint *)(lVar13 + 0x18);
          plVar9 = plVar15;
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar13 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
            thunk_FUN_03f5d7b8();
          }
          else {
            FUN_057e0c68(lVar13,uVar4,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar4 = DAT_09172638;
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = System_Type__GetTypeFromHandle(uVar4,0);
        if (*(int *)(DAT_09183878 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar6 = Newtonsoft_Json_Serialization_DefaultContractResolver__IsValidCallback
                          (plVar15,uVar7,uVar4,plVar16,&local_88);
        if ((uVar6 & 1) != 0) {
          lVar12 = *param_5;
          if (lVar12 == 0) {
            lVar12 = thunk_FUN_03f9944c(DAT_0917cb70);
            FUN_057e0400(lVar12,DAT_091afd70);
          }
          *param_5 = lVar12;
          thunk_FUN_03f5d7b8(param_5,lVar12);
          lVar13 = *param_5;
          uVar4 = Newtonsoft_Json_Serialization_JsonContract__CreateSerializationCallback(plVar15);
          lVar12 = DAT_091afd78;
          if (lVar13 == 0) {
LAB_076a5cfc:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar8 = *(long *)(lVar13 + 0x10);
          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
          if (lVar8 == 0) goto LAB_076a5cfc;
          uVar1 = *(uint *)(lVar13 + 0x18);
          plVar16 = plVar15;
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar13 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
            thunk_FUN_03f5d7b8();
          }
          else {
            FUN_057e0c68(lVar13,uVar4,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar4 = DAT_09172630;
        if ((uVar3 & 1) == 0) {
          if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar4 = System_Type__GetTypeFromHandle(uVar4,0);
          if (*(int *)(DAT_09183878 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar6 = Newtonsoft_Json_Serialization_DefaultContractResolver__IsValidCallback
                            (plVar15,uVar7,uVar4,local_c8,&local_88);
          if ((uVar6 & 1) != 0) {
            lVar12 = *param_6;
            if (lVar12 == 0) {
              lVar12 = thunk_FUN_03f9944c(DAT_0917cb70);
              FUN_057e0400(lVar12,DAT_091afd70);
            }
            *param_6 = lVar12;
            thunk_FUN_03f5d7b8(param_6,lVar12);
            lVar13 = *param_6;
            uVar4 = Newtonsoft_Json_Serialization_JsonContract__CreateSerializationCallback(plVar15)
            ;
            lVar12 = DAT_091afd78;
            if (lVar13 == 0) {
LAB_076a5d0c:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar8 = *(long *)(lVar13 + 0x10);
            *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
            if (lVar8 == 0) goto LAB_076a5d0c;
            uVar1 = *(uint *)(lVar13 + 0x18);
            local_c8 = plVar15;
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar13 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
              thunk_FUN_03f5d7b8();
            }
            else {
              FUN_057e0c68(lVar13,uVar4,
                           *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
        uVar4 = DAT_09172640;
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = System_Type__GetTypeFromHandle(uVar4,0);
        if (*(int *)(DAT_09183878 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar6 = Newtonsoft_Json_Serialization_DefaultContractResolver__IsValidCallback
                          (plVar15,uVar7,uVar4,plVar14,&local_88);
        if ((uVar6 & 1) != 0) {
          lVar12 = *param_7;
          if (lVar12 == 0) {
            lVar12 = thunk_FUN_03f9944c(DAT_0917cb78);
            FUN_057e0400(lVar12,DAT_091afd88);
          }
          *param_7 = lVar12;
          thunk_FUN_03f5d7b8(param_7,lVar12);
          lVar13 = *param_7;
          uVar4 = Newtonsoft_Json_Serialization_JsonContract__CreateSerializationErrorCallback
                            (plVar15);
          lVar12 = DAT_091afd90;
          if (lVar13 == 0) {
LAB_076a5d04:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar8 = *(long *)(lVar13 + 0x10);
          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
          if (lVar8 == 0) goto LAB_076a5d04;
          uVar1 = *(uint *)(lVar13 + 0x18);
          plVar14 = plVar15;
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar13 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
            thunk_FUN_03f5d7b8();
          }
          else {
            FUN_057e0c68(lVar13,uVar4,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      uVar1 = *(uint *)(lVar5 + 0x18);
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < (int)uVar1);
  } while( true );
}

