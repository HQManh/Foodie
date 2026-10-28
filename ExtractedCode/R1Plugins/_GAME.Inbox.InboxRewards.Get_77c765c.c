// rea decompile_all
// name: _GAME.Inbox.InboxRewards$$Get
// address: 0x77c765c
// body: available
// range: 0x77c765c-0x77c78e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77c78e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _GAME_Inbox_InboxRewards__Get(long param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  int iVar12;
  undefined8 uVar13;
  undefined4 local_68;
  undefined4 local_64;
  
  if ((DAT_09522f6c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091afa48);
    FUN_03f5c2a4(&DAT_091afa38);
    FUN_03f5c2a4(&DAT_091add20);
    FUN_03f5c2a4(&DAT_0917cae0);
    FUN_03f5c2a4(&DAT_0918a440);
    FUN_03f5c2a4(&DAT_09214090);
    DAT_09522f6c = 1;
  }
  lVar6 = thunk_FUN_03f9944c(DAT_0917cae0);
  FUN_057e0400(lVar6,DAT_091afa38);
  iVar3 = _GAME_Inbox_InboxRewards__Count(param_1);
  if (0 < iVar3) {
    if (param_1 == 0) {
LAB_077c78e4:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar12 = 0;
    do {
      if (*(long *)(param_1 + 0x50) == 0) goto LAB_077c78e4;
      uVar4 = FUN_05796eb0(*(long *)(param_1 + 0x50),iVar12,DAT_091add20);
      if (*(long *)(param_1 + 0x58) == 0) goto LAB_077c78e4;
      uVar5 = FUN_05796eb0(*(long *)(param_1 + 0x58),iVar12,DAT_091add20);
      uVar7 = thunk_FUN_03f9944c(DAT_0918a440);
      _GAME_GameItem_RwItemModel___ctor(uVar7,uVar4,uVar5,0);
      uVar8 = _GAME_Inbox_InboxRewards__IsValid(uVar7);
      lVar2 = DAT_091afa48;
      if ((uVar8 & 1) == 0) {
        if (*(long *)(param_1 + 0x50) == 0) goto LAB_077c78e4;
        uVar13 = *(undefined8 *)(param_1 + 0x10);
        local_64 = FUN_05796eb0(*(long *)(param_1 + 0x50),iVar12,DAT_091add20);
        uVar7 = FUN_03f5c42c(DAT_09535420,&local_64);
        if (*(long *)(param_1 + 0x58) == 0) goto LAB_077c78e4;
        local_68 = FUN_05796eb0(*(long *)(param_1 + 0x58),iVar12,DAT_091add20);
        uVar10 = FUN_03f5c42c(DAT_09535420,&local_68);
        uVar7 = System_String__Format(DAT_09214090,uVar13,uVar7,uVar10,0);
        if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_091835d0);
        }
        UnityEngine_Debug__LogWarning(uVar7,0);
      }
      else {
        if (lVar6 == 0) goto LAB_077c78e4;
        lVar11 = *(long *)(lVar6 + 0x10);
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar11 == 0) goto LAB_077c78e4;
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          puVar9 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
          *puVar9 = uVar7;
          thunk_FUN_03f5d7b8(puVar9,uVar7);
        }
        else {
          FUN_057e0c68(lVar6,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70)
                      );
        }
      }
      iVar12 = iVar12 + 1;
    } while (iVar3 != iVar12);
  }
  return lVar6;
}

