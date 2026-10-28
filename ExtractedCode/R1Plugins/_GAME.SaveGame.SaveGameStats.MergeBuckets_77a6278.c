// rea decompile_all
// name: _GAME.SaveGame.SaveGameStats$$MergeBuckets
// address: 0x77a6278
// body: available
// range: 0x77a6278-0x77a66a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77a6698 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77a669c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77a66a0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _GAME_SaveGame_SaveGameStats__MergeBuckets(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  undefined8 local_a0;
  undefined8 *puStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  int local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_09522e45 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919f9c8);
    FUN_03f5c2a4(&DAT_0919f978);
    FUN_03f5c2a4(&DAT_0919f9e0);
    FUN_03f5c2a4(&DAT_0919f9f0);
    FUN_03f5c2a4(&DAT_09176b28);
    FUN_03f5c2a4(&DAT_091c99e0);
    FUN_03f5c2a4(&DAT_091a4580);
    FUN_03f5c2a4(&DAT_091a4588);
    FUN_03f5c2a4(&DAT_091a4590);
    FUN_03f5c2a4(&DAT_091a86b8);
    FUN_03f5c2a4(&DAT_091a86d0);
    FUN_03f5c2a4(&DAT_091a86a0);
    FUN_03f5c2a4(&DAT_09179ee0);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_091b4aa8);
    FUN_03f5c2a4(&DAT_091b4ab0);
    FUN_03f5c2a4(&DAT_09189ea8);
    FUN_03f5c2a4(&DAT_092185d0);
    DAT_09522e45 = 1;
  }
  uStack_78 = 0;
  local_80 = 0;
  local_70 = 0;
  local_84 = 0;
  if (((param_1 == 0) || (*(long *)(param_1 + 0x20) == 0)) ||
     (lVar3 = FUN_06fca110(*(long *)(param_1 + 0x20),DAT_0919f9e0), lVar3 == 0)) {
    lVar3 = DAT_091c99e0;
    lVar7 = *(long *)(DAT_091c99e0 + 0x38);
    if (lVar7 == 0) {
      FUN_03f95ac8(DAT_091c99e0);
      lVar7 = *(long *)(lVar3 + 0x38);
    }
    lVar7 = *(long *)(lVar7 + 0x10);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03f95a6c();
    }
    if (*(int *)(lVar7 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    lVar3 = **(long **)(lVar3 + 0xb8);
  }
  lVar7 = thunk_FUN_03f9944c(DAT_09179ee0);
  FUN_053eb620(lVar7,lVar3,DAT_091a86a0);
  uVar4 = FUN_05a8eda4(DAT_091b4ab0);
  if ((uVar4 & 1) != 0) {
    lVar3 = *(long *)(DAT_091b4aa8 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    local_a0 = DAT_09189ea8;
    lVar3 = **(long **)(lVar3 + 0xb8);
    puStack_98 = (undefined8 *)0xffffffffffffffff;
    local_90 = 0xc;
    uVar5 = System_Enum__ToString(&local_a0,0);
    if (lVar3 == 0) goto LAB_077a669c;
    uVar5 = IapAdsSystem_RemoteConfigManager__GetString(lVar3,uVar5,0);
    lVar3 = IapAdsSystem_UserBucketTracking_IAAUserBucketConfig__FromString(uVar5,0);
    if ((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x10), lVar3 == 0)) goto LAB_077a669c;
    if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
      uVar4 = 0;
      uVar8 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
      do {
        if (uVar8 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        if (lVar7 == 0) goto LAB_077a669c;
        FUN_053ec72c(lVar7,*(undefined8 *)(lVar3 + 0x20 + uVar4 * 8),DAT_091a86b8);
        uVar8 = (ulong)*(uint *)(lVar3 + 0x18);
        uVar4 = uVar4 + 1;
      } while ((long)uVar4 < (long)(int)*(uint *)(lVar3 + 0x18));
    }
  }
  lVar3 = thunk_FUN_03f9944c(DAT_09176b28);
  FUN_06fc96ac(lVar3,DAT_0919f978);
  if (lVar7 != 0) {
    FUN_053ec0b0(&local_a0,lVar7,DAT_091a86d0);
    local_70 = CONCAT44(uStack_8c,local_90);
    uStack_78 = puStack_98;
    local_80 = local_a0;
    local_a0 = 0;
    puStack_98 = &local_80;
    while( true ) {
      do {
        uVar4 = FUN_071bb7b4(&local_80,DAT_091a4588);
        uVar5 = local_70;
        if ((uVar4 & 1) == 0) {
          FUN_071bb7b0(&local_80,DAT_091a4580);
          return lVar3;
        }
        uVar6 = System_String__Concat(DAT_092185d0,local_70,0);
        iVar1 = UnityEngine_PlayerPrefs__GetInt(uVar6,0,0);
        if ((param_1 == 0) || (*(long *)(param_1 + 0x20) == 0)) {
          iVar9 = 0;
        }
        else {
          uVar4 = FUN_06fcbf70(*(long *)(param_1 + 0x20),uVar5,&local_84,DAT_0919f9c8);
          iVar9 = local_84;
          if ((uVar4 & 1) == 0) {
            iVar9 = 0;
          }
        }
      } while ((iVar1 < 1) && (iVar9 < 1));
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_Math__Max(iVar1,iVar9,0);
      if (lVar3 == 0) break;
      FUN_06fca434(lVar3,uVar5,uVar2,DAT_0919f9f0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_077a669c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

