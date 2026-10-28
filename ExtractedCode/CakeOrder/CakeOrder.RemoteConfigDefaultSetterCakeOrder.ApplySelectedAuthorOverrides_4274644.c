// rea decompile_all
// name: CakeOrder.RemoteConfigDefaultSetterCakeOrder$$ApplySelectedAuthorOverrides
// address: 0x4274644
// body: available
// range: 0x4274644-0x4274b9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4274b98 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4274b9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_RemoteConfigDefaultSetterCakeOrder__ApplySelectedAuthorOverrides(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined1 auVar12 [16];
  uint local_6c;
  long local_68;
  
  if ((DAT_09517054 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_0919fee0);
    FUN_03f5c2a4(&DAT_0919fea0);
    FUN_03f5c2a4(&DAT_0919ff00);
    FUN_03f5c2a4(&DAT_09176c28);
    FUN_03f5c2a4(&DAT_091b4aa8);
    FUN_03f5c2a4(&DAT_091b4ab0);
    FUN_03f5c2a4(&DAT_09189e78);
    FUN_03f5c2a4(&DAT_0918b378);
    FUN_03f5c2a4(&DAT_091f7be8);
    FUN_03f5c2a4(&DAT_09214240);
    FUN_03f5c2a4(&DAT_09214230);
    DAT_09517054 = 1;
  }
  local_68 = 0;
  if (*(int *)(DAT_09189e78 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_0951713f == '\0') {
    FUN_03f5c2a4(&DAT_09189e78);
    DAT_0951713f = '\x01';
  }
  if (*(int *)(DAT_09189e78 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_String__IsNullOrEmpty(*(undefined8 *)(*(long *)(DAT_09189e78 + 0xb8) + 0x10),0);
  if ((((uVar2 & 1) != 0) || (*(long *)(param_1 + 0x20) == 0)) ||
     (uVar2 = FUN_05a8eda4(DAT_091b4ab0), (uVar2 & 1) == 0)) {
    return;
  }
  if (*(int *)(DAT_0918b378 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_09517140 == '\0') {
    FUN_03f5c2a4(&DAT_0918b378);
    DAT_09517140 = '\x01';
  }
  if (*(int *)(DAT_0918b378 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar8 = *(undefined8 *)(*(long *)(DAT_0918b378 + 0xb8) + 0x18);
  lVar3 = thunk_FUN_03f9944c(DAT_09176c28);
  auVar12 = FUN_06fd76e8(lVar3,uVar8,DAT_0919fea0);
  lVar11 = *(long *)(param_1 + 0x20);
  if (lVar11 != 0) {
    if (0 < (int)*(ulong *)(lVar11 + 0x18)) {
      uVar2 = 0;
      uVar5 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
      do {
        if (uVar5 <= uVar2) {
LAB_04274b98:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558(auVar12._0_8_,auVar12._8_8_);
        }
        lVar10 = *(long *)(lVar11 + uVar2 * 8 + 0x20);
        if ((lVar10 != 0) &&
           (auVar12 = System_String__IsNullOrWhiteSpace(*(undefined8 *)(lVar10 + 0x10),0),
           (auVar12._0_8_ & 1) == 0)) {
          uVar8 = *(undefined8 *)(lVar10 + 0x10);
          if (*(int *)(DAT_09189e78 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (DAT_0951713f == '\0') {
            FUN_03f5c2a4(&DAT_09189e78);
            DAT_0951713f = '\x01';
          }
          if (*(int *)(DAT_09189e78 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar8 = CakeOrder_RemoteConfigDefaultSetterCakeOrder__GetRemoteKeyForAuthorLevelOverride
                            (uVar8,*(undefined8 *)(*(long *)(DAT_09189e78 + 0xb8) + 0x10));
          lVar6 = *(long *)(DAT_091b4aa8 + 0x20);
          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_03f95a6c(lVar6);
          }
          lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_03f95a6c();
          }
          if (**(long **)(lVar6 + 0xb8) == 0) goto LAB_04274b9c;
          local_68 = IapAdsSystem_RemoteConfigManager__GetString(**(long **)(lVar6 + 0xb8),uVar8,0);
          uVar5 = System_String__IsNullOrWhiteSpace(local_68,0);
          if ((uVar5 & 1) != 0) {
            if (*(int *)(DAT_09189e78 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar6 = *(long *)(*(long *)(DAT_09189e78 + 0xb8) + 8);
            if (lVar6 == 0) goto LAB_04274b9c;
            FUN_06fd9fbc(lVar6,*(undefined8 *)(lVar10 + 0x10),&local_68,DAT_0919fee0);
          }
          uVar5 = System_String__IsNullOrWhiteSpace(local_68,0);
          if ((uVar5 & 1) == 0) {
            if (local_68 == 0) goto LAB_04274b9c;
            lVar6 = System_String__Split(local_68,0x26,0,0);
            uVar9 = *(undefined8 *)(lVar10 + 0x10);
            if (*(int *)(DAT_09189e78 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09189e78);
            }
            auVar12 = CakeOrder_RemoteConfigDefaultSetterCakeOrder__GetRemoteKeyForMapConfig
                                (uVar9,5);
            if (lVar6 == 0) goto LAB_04274b9c;
            if (*(int *)(lVar6 + 0x18) == 0) goto LAB_04274b98;
            if (lVar3 == 0) goto LAB_04274b9c;
            FUN_06fd8440(lVar3,auVar12._0_8_,*(undefined8 *)(lVar6 + 0x20),DAT_0919ff00);
            uVar4 = 0;
            if (*(long *)(lVar10 + 0x48) != 0) {
              uVar4 = *(uint *)(*(long *)(lVar10 + 0x48) + 0x18);
            }
            uVar1 = *(int *)(lVar6 + 0x18) - 1;
            uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
            if ((int)uVar4 <= (int)uVar1) {
              uVar4 = uVar1;
            }
            if (uVar4 != 0) {
              uVar5 = 0;
              do {
                uVar9 = *(undefined8 *)(lVar10 + 0x10);
                if (*(int *)(DAT_09189e78 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar9 = CakeOrder_RemoteConfigDefaultSetterCakeOrder__GetRemoteKeyForMapLevelDesign
                                  (uVar9,uVar5 & 0xffffffff);
                auVar12._8_8_ = uVar9;
                auVar12._0_8_ = uVar9;
                if (uVar5 < uVar1) {
                  if ((ulong)*(uint *)(lVar6 + 0x18) <= uVar5 + 1) goto LAB_04274b98;
                  puVar7 = (undefined8 *)(lVar6 + (uVar5 + 1) * 8 + 0x20);
                }
                else {
                  puVar7 = *(undefined8 **)(DAT_09535468 + 0xb8);
                }
                uVar5 = uVar5 + 1;
                FUN_06fd8440(lVar3,uVar9,*puVar7,DAT_0919ff00);
              } while (uVar5 != uVar4);
            }
            local_6c = uVar1;
            uVar9 = FUN_03f5c42c(DAT_09535420,&local_6c);
            uVar8 = System_String__Format(DAT_09214230,uVar8,uVar9,0);
            if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
              FUN_03f5c424(DAT_091835d0);
            }
            auVar12 = UnityEngine_Debug__Log(uVar8,0);
          }
          else {
            uVar8 = System_String__Concat(DAT_09214240,uVar8,DAT_091f7be8,0);
            if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
              FUN_03f5c424(DAT_091835d0);
            }
            auVar12 = UnityEngine_Debug__Log(uVar8,0);
          }
        }
        uVar5 = (ulong)*(uint *)(lVar11 + 0x18);
        uVar2 = uVar2 + 1;
      } while ((long)uVar2 < (long)(int)*(uint *)(lVar11 + 0x18));
    }
    lVar11 = *(long *)(DAT_091b4aa8 + 0x20);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_03f95a6c();
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_03f95a6c();
    }
    if (**(long **)(lVar11 + 0xb8) != 0) {
      IapAdsSystem_RemoteConfigManager__SetRuntimeStringOverrides
                (**(long **)(lVar11 + 0xb8),lVar3,0);
      return;
    }
  }
LAB_04274b9c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

