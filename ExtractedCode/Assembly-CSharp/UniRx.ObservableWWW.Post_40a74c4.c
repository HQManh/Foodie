// rea decompile_all
// name: UniRx.ObservableWWW$$Post
// address: 0x40a74c4
// body: available
// range: 0x40a74c4-0x40a7623 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40a761c to 0x4c3e284 FUN_04c3e284 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40a7620 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void UniRx_ObservableWWW__Post
               (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if ((DAT_09515e6a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09179538);
    FUN_03f5c2a4(&DAT_091d51d8);
    FUN_03f5c2a4(&DAT_09188b78);
    FUN_03f5c2a4(&DAT_091edfc8);
    FUN_03f5c2a4(&DAT_09192fb8);
    DAT_09515e6a = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09192fb8);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x10) = param_1;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x10),param_1);
    plVar3 = (long *)(lVar1 + 0x18);
    *plVar3 = param_2;
    thunk_FUN_03f5d7b8(plVar3,param_2);
    *(undefined8 *)(lVar1 + 0x28) = param_3;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x28),param_3);
    *(undefined8 *)(lVar1 + 0x30) = param_4;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x30),param_4);
    if (*plVar3 != 0) {
      uVar2 = UnityEngine_WWWForm__get_headers(*plVar3,0);
      *(undefined8 *)(lVar1 + 0x20) = uVar2;
      thunk_FUN_03f5d7b8();
      uVar2 = thunk_FUN_03f9944c(DAT_09179538);
      FUN_0532fb0c(uVar2,lVar1,DAT_091edfc8,0);
      if (*(int *)(DAT_09188b78 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_04c3e284(uVar2,DAT_091d51d8);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

