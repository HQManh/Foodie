// rea decompile_all
// name: _GAME.SaveGame.SaveGameManager$$CanonicalizeProfileIdentity
// address: 0x77a1010
// body: available
// range: 0x77a1010-0x77a12d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77a12cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77a12d0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_SaveGame_SaveGameManager__CanonicalizeProfileIdentity(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if ((DAT_09522e25 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180dc0);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091896c0);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_091fa108);
    FUN_03f5c2a4(&DAT_091f6328);
    FUN_03f5c2a4(&DAT_09214298);
    DAT_09522e25 = 1;
  }
  if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_09522cb0 == '\0') {
    FUN_03f5c2a4(&DAT_09180dc0);
    DAT_09522cb0 = '\x01';
  }
  if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = **(undefined8 **)(DAT_09180dc0 + 0xb8);
  if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_091896c0);
  }
  if (**(long **)(DAT_091896c0 + 0xb8) != 0) {
    uVar1 = System_String__Equals(*(undefined8 *)(**(long **)(DAT_091896c0 + 0xb8) + 0x10),uVar5,0);
    if ((uVar1 & 1) == 0) {
      if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (**(long **)(DAT_091896c0 + 0xb8) == 0) goto LAB_077a12cc;
      uVar1 = _GAME_Utils_HelperString__IsNullOrEmpty
                        (*(undefined8 *)(**(long **)(DAT_091896c0 + 0xb8) + 0x10),0);
      if ((uVar1 & 1) == 0) {
        lVar2 = FUN_03f5c394(DAT_091805f8,5);
        if (lVar2 == 0) goto LAB_077a12cc;
        if (*(int *)(lVar2 + 0x18) == 0) goto LAB_077a12d0;
        *(undefined8 *)(lVar2 + 0x20) = DAT_09214298;
        thunk_FUN_03f5d7b8();
        if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (**(long **)(DAT_091896c0 + 0xb8) == 0) goto LAB_077a12cc;
        if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) == 0) {
LAB_077a12d0:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(**(long **)(DAT_091896c0 + 0xb8) + 0x10);
        thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x28));
        if (*(uint *)(lVar2 + 0x18) < 3) goto LAB_077a12d0;
        *(undefined8 *)(lVar2 + 0x30) = DAT_091f6328;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x30));
        if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) == 0) goto LAB_077a12d0;
        *(undefined8 *)(lVar2 + 0x38) = uVar5;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x38),uVar5);
        if (*(uint *)(lVar2 + 0x18) < 5) goto LAB_077a12d0;
        *(undefined8 *)(lVar2 + 0x40) = DAT_091fa108;
        thunk_FUN_03f5d7b8();
        uVar3 = System_String__Concat(lVar2,0);
        if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_091835d0);
        }
        UnityEngine_Debug__LogWarning(uVar3,0);
      }
      if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (**(long **)(DAT_091896c0 + 0xb8) == 0) goto LAB_077a12cc;
      puVar4 = (undefined8 *)(**(long **)(DAT_091896c0 + 0xb8) + 0x10);
      *puVar4 = uVar5;
      thunk_FUN_03f5d7b8(puVar4,uVar5);
    }
    if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (**(long **)(DAT_091896c0 + 0xb8) != 0) {
      *(undefined1 *)(**(long **)(DAT_091896c0 + 0xb8) + 0xc1) = 1;
      return;
    }
  }
LAB_077a12cc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

