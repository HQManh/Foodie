// rea decompile_all
// name: _GAME.BaseGame.SOIAPConfig$$GetPack
// address: 0x77dab10
// body: available
// range: 0x77dab10-0x77daefb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77daef0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77daef4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77daef8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _GAME_BaseGame_SOIAPConfig__GetPack(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 local_a8;
  undefined8 *puStack_a0;
  undefined8 local_98;
  ulong uStack_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 *puStack_78;
  undefined8 local_70;
  ulong local_68;
  
  if ((DAT_0952300e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174980);
    FUN_03f5c2a4(&DAT_0919cd98);
    FUN_03f5c2a4(&DAT_091a1fa8);
    FUN_03f5c2a4(&DAT_091a1fb0);
    FUN_03f5c2a4(&DAT_091a1fb8);
    FUN_03f5c2a4(&DAT_091afa48);
    FUN_03f5c2a4(&DAT_091afa50);
    FUN_03f5c2a4(&DAT_091aaa98);
    FUN_03f5c2a4(&DAT_091aaaa0);
    FUN_03f5c2a4(&DAT_09189978);
    FUN_03f5c2a4(&DAT_0918a440);
    FUN_03f5c2a4(&DAT_0918a4d0);
    FUN_03f5c2a4(&DAT_091ef5a0);
    FUN_03f5c2a4(&DAT_09194048);
    FUN_03f5c2a4(&DAT_091f7248);
    DAT_0952300e = 1;
  }
  local_84 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_80 = 0;
  local_68 = 0;
  local_70 = 0;
  lVar4 = thunk_FUN_03f9944c(DAT_09194048);
  System_Object___ctor(lVar4,0);
  if (*(int *)(DAT_0918a4d0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if ((lVar4 != 0) && (**(long **)(DAT_0918a4d0 + 0xb8) != 0)) {
    uVar5 = FUN_06f359c8(**(long **)(DAT_0918a4d0 + 0xb8),param_1,lVar4 + 0x10,DAT_0919cd98);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    if (*(int *)(DAT_0918a4d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = _GAME_BaseGame_SOIAPConfig__ConvertSku(param_1);
    lVar7 = _GAME_Bridge_CookOrderBridge__GetIapPackRewards(uVar6,0);
    if ((lVar7 != 0) && (lVar11 = *(long *)(lVar4 + 0x10), lVar11 != 0)) {
      iVar1 = *(int *)(lVar7 + 0x18);
      *(bool *)(lVar11 + 0x30) = 0 < iVar1;
      if (0 < iVar1) {
        lVar11 = *(long *)(lVar11 + 0x20);
        if (lVar11 == 0) goto LAB_077daef8;
        iVar1 = *(int *)(lVar11 + 0x18);
        *(undefined4 *)(lVar11 + 0x18) = 0;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (0 < iVar1) {
          System_Array__Clear(*(undefined8 *)(lVar11 + 0x10),0,iVar1,0);
        }
        FUN_056bc7b0(&local_a8,lVar7,DAT_091aaa98);
        puStack_78 = puStack_a0;
        local_80 = local_a8;
        local_68 = uStack_90;
        local_70 = local_98;
        puStack_a0 = &local_80;
        local_a8 = 0;
LAB_077dad28:
        uVar8 = FUN_07188bd8(&local_80,DAT_091a1fb0);
        uVar5 = local_68;
        uVar6 = local_70;
        if ((uVar8 & 1) != 0) {
          if (*(int *)(DAT_09189978 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar8 = _GAME_Bridge_R1RewardMap__TryGetRewardType(uVar6,&local_84,0);
          uVar3 = local_84;
          if ((uVar8 & 1) != 0) {
            if (*(long *)(lVar4 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar11 = *(long *)(*(long *)(lVar4 + 0x10) + 0x20);
            uVar6 = thunk_FUN_03f9944c(DAT_0918a440);
            _GAME_GameItem_RwItemModel___ctor(uVar6,uVar3,uVar5 & 0xffffffff,0);
            lVar7 = DAT_091afa48;
            if (lVar11 != 0) {
              lVar12 = *(long *)(lVar11 + 0x10);
              *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
              if (lVar12 != 0) {
                uVar2 = *(uint *)(lVar11 + 0x18);
                if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                  *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                  puVar9 = (undefined8 *)(lVar12 + (long)(int)uVar2 * 8 + 0x20);
                  *puVar9 = uVar6;
                  thunk_FUN_03f5d7b8(puVar9,uVar6);
                }
                else {
                  FUN_057e0c68(lVar11,uVar6,
                               *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
                }
                goto LAB_077dad28;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          goto LAB_077dad28;
        }
        FUN_07188bd4(&local_80,DAT_091a1fa8);
      }
      lVar7 = *(long *)(lVar4 + 0x10);
      if (lVar7 != 0) {
        if (*(long *)(lVar7 + 0x28) != 0) {
          return lVar7;
        }
        local_a8 = CONCAT44(local_a8._4_4_,*(undefined4 *)(lVar7 + 0x14));
        uVar6 = FUN_03f5c42c(DAT_09535450,&local_a8);
        uVar6 = System_String__Format(DAT_091f7248,uVar6,0);
        *(undefined8 *)(lVar7 + 0x28) = uVar6;
        thunk_FUN_03f5d7b8((long *)(lVar7 + 0x28),uVar6);
        if (*(int *)(DAT_0918a4d0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar6 = _GAME_BaseGame_SOIAPConfig__ConvertSku(param_1);
        uVar10 = thunk_FUN_03f9944c(DAT_09174980);
        FUN_070a8c30(uVar10,lVar4,DAT_091ef5a0,0);
        _GAME_Bridge_CookOrderBridge__LoadIapPrice(uVar6,uVar10,0);
        return *(long *)(lVar4 + 0x10);
      }
    }
  }
LAB_077daef8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

