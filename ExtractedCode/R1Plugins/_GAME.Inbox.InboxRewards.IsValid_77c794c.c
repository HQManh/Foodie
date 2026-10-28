// rea decompile_all
// name: _GAME.Inbox.InboxRewards$$IsValid
// address: 0x77c794c
// body: available
// range: 0x77c794c-0x77c7c2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77c7b0c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte _GAME_Inbox_InboxRewards__IsValid(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  undefined4 local_24;
  
  if ((DAT_09522f6f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091acd80);
    FUN_03f5c2a4(&DAT_091ae928);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189978);
    FUN_03f5c2a4(&DAT_09172b50);
    FUN_03f5c2a4(&DAT_0918a450);
    FUN_03f5c2a4(&DAT_0918a4d8);
    FUN_03f5c2a4(&DAT_091ba5d0);
    DAT_09522f6f = 1;
  }
  uVar3 = DAT_09172b50;
  if (param_1 == 0) goto LAB_077c7b0c;
  if (*(int *)(param_1 + 0x10) != -1) {
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_Type__GetTypeFromHandle(uVar3,0);
    local_24 = *(undefined4 *)(param_1 + 0x10);
    uVar4 = FUN_03f5c42c(DAT_0918a450,&local_24);
    if (*(int *)(DAT_09535470 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09535470);
    }
    uVar5 = System_Enum__IsDefined(uVar3,uVar4,0);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(DAT_09189978 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = _GAME_Bridge_R1RewardMap__CanGrant(param_1,0);
      if ((uVar5 & 1) != 0) {
        iVar8 = *(int *)(param_1 + 0x10);
        if (iVar8 == 0x34) {
          iVar8 = *(int *)(param_1 + 0x14);
          uVar3 = FUN_039af8ec(DAT_091ba5d0);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188ad0);
          }
          uVar5 = UnityEngine_Object__op_Inequality(uVar3,0,0);
          if ((uVar5 & 1) != 0) {
            if (*(int *)(DAT_0918a4d8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar6 = _GAME_Profile_SOProfileConfig__get_ListNameFx(0);
            goto joined_r0x077c7c00;
          }
LAB_077c7c0c:
          iVar7 = 0;
        }
        else {
          if (iVar8 == 0x33) {
            uVar3 = FUN_039af8ec(DAT_091ba5d0);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09188ad0);
            }
            uVar5 = UnityEngine_Object__op_Inequality(uVar3,0,0);
            if ((uVar5 & 1) != 0) {
              uVar1 = *(undefined4 *)(param_1 + 0x14);
              if (*(int *)(DAT_0918a4d8 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              bVar2 = _GAME_Profile_SOProfileConfig__HasFrame(uVar1,0);
              goto LAB_077c7b84;
            }
            goto LAB_077c7b80;
          }
          if (iVar8 != 0x32) {
            bVar2 = 0 < *(int *)(param_1 + 0x14);
            goto LAB_077c7b84;
          }
          iVar8 = *(int *)(param_1 + 0x14);
          uVar3 = FUN_039af8ec(DAT_091ba5d0);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188ad0);
          }
          uVar5 = UnityEngine_Object__op_Inequality(uVar3,0,0);
          if ((uVar5 & 1) == 0) goto LAB_077c7c0c;
          if (*(int *)(DAT_0918a4d8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar6 = _GAME_Profile_SOProfileConfig__get_ListAvatar(0);
joined_r0x077c7c00:
          if (lVar6 == 0) {
LAB_077c7b0c:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          iVar7 = *(int *)(lVar6 + 0x18);
        }
        bVar2 = -1 < iVar8 && iVar8 < iVar7;
        goto LAB_077c7b84;
      }
    }
  }
LAB_077c7b80:
  bVar2 = 0;
LAB_077c7b84:
  return bVar2 & 1;
}

