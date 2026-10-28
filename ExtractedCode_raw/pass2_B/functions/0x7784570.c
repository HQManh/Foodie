// rea decompile_all
// name: _GAME.Team.TeamServer$$ParseTeamInfoResponse
// address: 0x7784570
// body: available
// range: 0x7784570-0x7784a7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7784a54 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7784a58 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7784a5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7784a60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7784a64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7784a68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7784a6c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7784a70 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7784a74 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7784a78 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7784a7c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertio
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07784938) */

long _GAME_Team_TeamServer__ParseTeamInfoResponse(undefined8 param_1,long param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 local_a8;
  undefined8 *puStack_a0;
  long local_98;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  undefined8 uStack_68;
  int local_54;
  
  if ((DAT_09522d47 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919ffa0);
    FUN_03f5c2a4(&DAT_0919ffa8);
    FUN_03f5c2a4(&DAT_0919ff98);
    FUN_03f5c2a4(&DAT_0919ffc0);
    FUN_03f5c2a4(&DAT_0919ffc8);
    FUN_03f5c2a4(&DAT_09176c50);
    FUN_03f5c2a4(&DAT_091c9880);
    FUN_03f5c2a4(&DAT_091a5a08);
    FUN_03f5c2a4(&DAT_091a5a10);
    FUN_03f5c2a4(&DAT_091a5a18);
    FUN_03f5c2a4(&DAT_09179120);
    FUN_03f5c2a4(&DAT_091d16a0);
    FUN_03f5c2a4(&DAT_09187300);
    FUN_03f5c2a4(&DAT_091b3db8);
    FUN_03f5c2a4(&DAT_0918b958);
    FUN_03f5c2a4(&DAT_0918b980);
    FUN_03f5c2a4(&DAT_0918b988);
    FUN_03f5c2a4(&DAT_091f0c60);
    FUN_03f5c2a4(&DAT_09194f48);
    FUN_03f5c2a4(&DAT_0921a0d8);
    DAT_09522d47 = 1;
  }
  local_54 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  lVar2 = thunk_FUN_03f9944c(DAT_0918b988);
  *(undefined4 *)(lVar2 + 0x14) = 0xffffffff;
  System_Object___ctor(lVar2,0);
  if (param_2 < 0) {
    return lVar2;
  }
  uVar3 = _GAME_Team_TeamServer__TryReadWireStatus(param_1,&local_54,&uStack_68);
  if ((uVar3 & 1) == 0) {
    return lVar2;
  }
  *(undefined1 *)(lVar2 + 0x10) = 1;
  *(int *)(lVar2 + 0x14) = local_54;
  if (local_54 != 0) {
    return lVar2;
  }
  lVar4 = Newtonsoft_Json_Linq_JObject__Parse(param_1,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar5 = Newtonsoft_Json_Linq_JObject__get_Item(lVar4,DAT_0921a0d8,0);
  if (lVar5 != 0) {
    plVar6 = (long *)Newtonsoft_Json_Linq_JObject__get_Item(lVar4,DAT_0921a0d8,0);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar1 = (**(code **)(*plVar6 + 0x228))(plVar6,*(undefined8 *)(*plVar6 + 0x230));
    if (iVar1 != 10) {
      if (*(int *)(DAT_09187300 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar4 = FUN_04bd15a4(param_1,DAT_091d16a0);
      if ((((lVar4 != 0) && (lVar5 = *(long *)(lVar4 + 0x18), lVar5 != 0)) &&
          (lVar11 = *(long *)(lVar5 + 0x18), lVar11 != 0)) && (*(long *)(lVar5 + 0x20) != 0)) {
        lVar5 = thunk_FUN_03f9944c(DAT_0918b958);
        _GAME_Team_TeamInfoModel___ctor(lVar5,lVar11);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if ((0 < *(long *)(lVar5 + 0x10)) &&
           ((param_2 == 0 || (*(long *)(lVar5 + 0x10) == param_2)))) {
          lVar11 = thunk_FUN_03f9944c(DAT_09176c50);
          FUN_06fd76bc(lVar11,DAT_0919ff98);
          plVar6 = (long *)(lVar5 + 0x58);
          *plVar6 = lVar11;
          thunk_FUN_03f5d7b8(plVar6,lVar11);
          if (*(long *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar4 = *(long *)(*(long *)(lVar4 + 0x18) + 0x20);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          FUN_057e185c(&local_a8,lVar4,DAT_091b3db8);
          uStack_78 = puStack_a0;
          local_80 = local_a8;
          local_70 = local_98;
          puStack_a0 = &local_80;
          local_a8 = 0;
          while (uVar3 = FUN_071bd28c(&local_80,DAT_091a5a10), lVar4 = local_70, (uVar3 & 1) != 0) {
            if ((local_70 != 0) &&
               (uVar3 = _GAME_Utils_HelperString__IsNullOrEmpty(*(undefined8 *)(local_70 + 0x10),0),
               (uVar3 & 1) == 0)) {
              if (*plVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar3 = FUN_06fd8648(*plVar6,*(undefined8 *)(lVar4 + 0x10),DAT_0919ffa8);
              if ((uVar3 & 1) == 0) {
                lVar11 = thunk_FUN_03f9944c(DAT_0918b980);
                _GAME_Team_TeamMemberModel___ctor(lVar11,lVar4);
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                if (*(uint *)(lVar11 + 0x30) < 2) {
                  if (*plVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  FUN_06fd8454(*plVar6,*(undefined8 *)(lVar4 + 0x10),lVar11,DAT_0919ffa0);
                }
              }
            }
          }
          FUN_03ebe450(&local_a8);
          if ((param_3 & 1) == 0) {
LAB_07784a40:
            *(long *)(lVar2 + 0x18) = lVar5;
            thunk_FUN_03f5d7b8((long *)(lVar2 + 0x18),lVar5);
            return lVar2;
          }
          if (0 < *(int *)(lVar5 + 0x48)) {
            if (*plVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            iVar1 = FUN_06fd810c(*plVar6,DAT_0919ffc0);
            if (iVar1 != 0) {
              if (*plVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              iVar1 = FUN_06fd810c(*plVar6,DAT_0919ffc0);
              if (iVar1 <= *(int *)(lVar5 + 0x48)) {
                if (*plVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                uVar7 = FUN_06fd8278(*plVar6,DAT_0919ffc8);
                if (*(int *)(DAT_09194f48 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                puVar9 = *(undefined8 **)(DAT_09194f48 + 0xb8);
                lVar4 = puVar9[1];
                if (lVar4 == 0) {
                  if (*(int *)(DAT_09194f48 + 0xe4) == 0) {
                    FUN_03f5c424();
                    puVar9 = *(undefined8 **)(DAT_09194f48 + 0xb8);
                  }
                  uVar10 = *puVar9;
                  lVar4 = thunk_FUN_03f9944c(DAT_09179120);
                  FUN_05322d94(lVar4,uVar10,DAT_091f0c60,0);
                  plVar6 = (long *)(*(long *)(DAT_09194f48 + 0xb8) + 8);
                  *plVar6 = lVar4;
                  thunk_FUN_03f5d7b8(plVar6,lVar4);
                }
                iVar1 = FUN_04adc4d0(uVar7,lVar4,DAT_091c9880);
                if (iVar1 == 1) goto LAB_07784a40;
              }
            }
          }
        }
      }
      uVar8 = 0xfffffffe;
      goto LAB_077847e8;
    }
  }
  uVar8 = 8;
LAB_077847e8:
  *(undefined4 *)(lVar2 + 0x14) = uVar8;
  return lVar2;
}

