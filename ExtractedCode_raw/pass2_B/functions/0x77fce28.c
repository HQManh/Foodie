// rea decompile_all
// name: _GAME.EventSale.EventSalePackUICtrl$$Setup
// address: 0x77fce28
// body: available
// range: 0x77fce28-0x77fd46f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77fd264 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77fd394 to 0x77dd95c _GAME.BaseGame.TrackingManager$$LogEventIAPShow (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_EventSale_EventSalePackUICtrl__Setup(long param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  undefined8 uVar15;
  undefined4 local_68;
  undefined4 local_64;
  
  if ((DAT_09523196 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091cb8f0);
    FUN_03f5c2a4(&DAT_091852b8);
    FUN_03f5c2a4(&DAT_091afa78);
    FUN_03f5c2a4(&DAT_091afa90);
    FUN_03f5c2a4(&DAT_091afa98);
    FUN_03f5c2a4(&DAT_091afa60);
    FUN_03f5c2a4(&DAT_091afaa0);
    FUN_03f5c2a4(&DAT_091afa68);
    FUN_03f5c2a4(&DAT_091ac940);
    FUN_03f5c2a4(&DAT_091d4c48);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0917e028);
    FUN_03f5c2a4(&DAT_0918a4c8);
    FUN_03f5c2a4(&DAT_0918a4d0);
    FUN_03f5c2a4(&DAT_091ba3e0);
    FUN_03f5c2a4(&DAT_091ba3f8);
    FUN_03f5c2a4(&DAT_0917e718);
    FUN_03f5c2a4(&DAT_091e9c58);
    FUN_03f5c2a4(&DAT_09190740);
    FUN_03f5c2a4(&DAT_09214060);
    FUN_03f5c2a4(&DAT_0920aa78);
    FUN_03f5c2a4(&DAT_09214058);
    DAT_09523196 = 1;
  }
  lVar3 = DAT_0918a4c8;
  *(undefined4 *)(param_1 + 0x40) = param_2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar3 = _GAME_EventSale_SOEventSaleConfig__get_ListPack();
  if (lVar3 != 0) {
    lVar3 = FUN_057e0998(lVar3,*(undefined4 *)(param_1 + 0x40),DAT_091ac940);
    plVar10 = (long *)(param_1 + 0x48);
    *plVar10 = lVar3;
    thunk_FUN_03f5d7b8(plVar10,lVar3);
    if (*plVar10 != 0) {
      uVar2 = *(undefined4 *)(*plVar10 + 0x14);
      if (*(int *)(DAT_0918a4d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar3 = _GAME_BaseGame_SOIAPConfig__GetPack(uVar2,0);
      plVar11 = (long *)(param_1 + 0x50);
      *plVar11 = lVar3;
      thunk_FUN_03f5d7b8(plVar11,lVar3);
      if (*plVar11 == 0) {
        if (*plVar10 == 0) goto LAB_077fd264;
        local_64 = *(undefined4 *)(*plVar10 + 0x14);
        uVar15 = FUN_03f5c42c(DAT_091852b8,&local_64);
        puVar8 = &DAT_09214058;
      }
      else {
        lVar3 = *(long *)(param_1 + 0x20);
        if (*(int *)(DAT_09190740 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar8 = *(undefined8 **)(DAT_09190740 + 0xb8);
        lVar14 = puVar8[1];
        if (lVar14 == 0) {
          if (*(int *)(DAT_09190740 + 0xe4) == 0) {
            FUN_03f5c424();
            puVar8 = *(undefined8 **)(DAT_09190740 + 0xb8);
          }
          uVar15 = *puVar8;
          lVar14 = thunk_FUN_03f9944c(DAT_0917e028);
          FUN_05d78cfc(lVar14,uVar15,DAT_091e9c58,0);
          plVar4 = (long *)(*(long *)(DAT_09190740 + 0xb8) + 8);
          *plVar4 = lVar14;
          thunk_FUN_03f5d7b8(plVar4,lVar14);
        }
        if (lVar3 == 0) goto LAB_077fd264;
        FUN_057e23b0(lVar3,lVar14,DAT_091afa90);
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_077fd264;
        if (1 < *(int *)(*(long *)(param_1 + 0x20) + 0x18)) {
          lVar3 = *plVar11;
          if (lVar3 != 0) {
            iVar12 = 0;
            while (*(long *)(lVar3 + 0x20) != 0) {
              iVar13 = *(int *)(*(long *)(lVar3 + 0x20) + 0x18);
              lVar3 = *(long *)(param_1 + 0x20);
              if (iVar13 <= iVar12) goto LAB_077fd298;
              if (lVar3 == 0) break;
              if (iVar12 < *(int *)(lVar3 + 0x18)) {
                lVar3 = FUN_057e0998(lVar3,iVar12,DAT_091afaa0);
              }
              else {
                uVar15 = FUN_057e0998(lVar3,1,DAT_091afaa0);
                if (((*(long *)(param_1 + 0x20) == 0) ||
                    (lVar3 = FUN_057e0998(*(long *)(param_1 + 0x20),1,DAT_091afaa0), lVar3 == 0)) ||
                   (lVar3 = UnityEngine_Component__get_transform(lVar3,0), lVar3 == 0)) break;
                uVar5 = UnityEngine_Transform__GetParent(lVar3,0);
                if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                  FUN_03f5c424(DAT_09188ad0);
                }
                lVar3 = FUN_04c35338(uVar15,uVar5,DAT_091d4c48);
              }
              lVar14 = DAT_091afa78;
              lVar6 = *(long *)(param_1 + 0x20);
              if (lVar6 == 0) break;
              uVar1 = *(uint *)(lVar6 + 0x18);
              if ((int)uVar1 <= iVar12) {
                lVar9 = *(long *)(lVar6 + 0x10);
                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                if (lVar9 == 0) break;
                if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                  *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                  plVar4 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                  *plVar4 = lVar3;
                  thunk_FUN_03f5d7b8(plVar4,lVar3);
                }
                else {
                  FUN_057e0c68(lVar6,lVar3,
                               *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                }
              }
              if ((lVar3 == 0) ||
                 (lVar14 = UnityEngine_Component__get_gameObject(lVar3,0), lVar14 == 0)) break;
              UnityEngine_GameObject__SetActive(lVar14,1,0);
              if ((*plVar11 == 0) || (lVar14 = *(long *)(*plVar11 + 0x20), lVar14 == 0)) break;
              uVar15 = FUN_057e0998(lVar14,iVar12,DAT_091afa68);
              _GAME_GameUI_RwItemUICtrl__SetData(lVar3,uVar15,0);
              lVar3 = *plVar11;
              iVar12 = iVar12 + 1;
              if (lVar3 == 0) break;
            }
          }
          goto LAB_077fd264;
        }
        if (*plVar10 == 0) goto LAB_077fd264;
        local_68 = *(undefined4 *)(*plVar10 + 0x14);
        uVar15 = FUN_03f5c42c(DAT_091852b8,&local_68);
        puVar8 = &DAT_09214060;
      }
      uVar15 = System_String__Format(*puVar8,uVar15,0);
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_091835d0);
      }
      UnityEngine_Debug__LogError(uVar15,0);
      lVar3 = UnityEngine_Component__get_gameObject(param_1,0);
      if (lVar3 != 0) {
        UnityEngine_GameObject__SetActive(lVar3,0,0);
        return;
      }
    }
  }
LAB_077fd264:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
LAB_077fd298:
  if (lVar3 == 0) goto LAB_077fd264;
  if (*(int *)(lVar3 + 0x18) <= iVar13) {
    uVar2 = *(undefined4 *)(param_1 + 0x58);
    if (*(int *)(DAT_0917e718 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_060df6f8(uVar2,DAT_091ba3f8);
    uVar15 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar15,param_1,DAT_091cb8f0,0);
    uVar2 = FUN_060df21c(uVar15,1,param_1,DAT_091ba3e0);
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    uVar7 = _GAME_Utils_HelperButton__ActiveSelf(*(undefined8 *)(param_1 + 0x30),0);
    if ((uVar7 & 1) == 0) {
      return;
    }
    if (*plVar10 != 0) {
      uVar2 = *(undefined4 *)(*plVar10 + 0x14);
      if (*(int *)(DAT_0918a4d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar15 = _GAME_BaseGame_SOIAPConfig__ConvertSku(uVar2,0);
      _GAME_BaseGame_TrackingManager__LogEventIAPShow(uVar15,DAT_0920aa78,0);
      return;
    }
    goto LAB_077fd264;
  }
  lVar3 = FUN_057e0998(lVar3,iVar13,DAT_091afaa0);
  if ((lVar3 == 0) || (lVar3 = UnityEngine_Component__get_gameObject(lVar3,0), lVar3 == 0))
  goto LAB_077fd264;
  UnityEngine_GameObject__SetActive(lVar3,0,0);
  lVar3 = *(long *)(param_1 + 0x20);
  iVar13 = iVar13 + 1;
  goto LAB_077fd298;
}

