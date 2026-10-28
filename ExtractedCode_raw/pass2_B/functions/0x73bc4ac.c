// rea decompile_all
// name: MessagePack.Internal.ReflectionExtensions$$IsAnonymous
// address: 0x73bc4ac
// body: available
// range: 0x73bc4ac-0x73bc61b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73bc618 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 MessagePack_Internal_ReflectionExtensions__IsAnonymous(long *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((DAT_09520c3c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09171250);
    FUN_03f5c2a4(&DAT_091fa2e0);
    FUN_03f5c2a4(&DAT_091fa2d8);
    FUN_03f5c2a4(&DAT_09212a40);
    DAT_09520c3c = 1;
  }
  if (param_1 != (long *)0x0) {
    lVar1 = (**(code **)(*param_1 + 0x2d8))(param_1,*(undefined8 *)(*param_1 + 0x2e0));
    if ((lVar1 != 0) || (uVar2 = System_Type__get_IsSealed(param_1,0), (uVar2 & 1) == 0)) {
      return 0;
    }
    lVar1 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
    if (lVar1 != 0) {
      uVar2 = System_String__StartsWith(lVar1,DAT_091fa2e0,4,0);
      if ((uVar2 & 1) == 0) {
        lVar1 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
        if (lVar1 == 0) goto LAB_073bc618;
        uVar2 = System_String__StartsWith(lVar1,DAT_091fa2d8,4,0);
        if ((uVar2 & 1) == 0) {
          lVar1 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
          if (lVar1 == 0) goto LAB_073bc618;
          uVar2 = System_String__StartsWith(lVar1,DAT_09212a40,4,0);
          if ((uVar2 & 1) == 0) {
            return 0;
          }
        }
      }
      uVar3 = DAT_09171250;
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = System_Type__GetTypeFromHandle(uVar3,0);
                    /* WARNING: Could not recover jumptable at 0x073bc604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*param_1 + 0x1f8))(param_1,uVar3,0,*(undefined8 *)(*param_1 + 0x200));
      return uVar3;
    }
  }
LAB_073bc618:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

