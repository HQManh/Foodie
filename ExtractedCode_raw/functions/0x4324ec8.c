// rea decompile_all
// name: FUN_04324ec8
// address: 0x4324ec8
// body: available
// range: 0x4324ec8-0x4325043 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4325040 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_04324ec8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 local_28;
  
  local_28 = param_2;
  if (DAT_09517670 == '\0') {
    FUN_03f5c2a4(&DAT_0918e708);
    FUN_03f5c2a4(&DAT_09181970);
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_091b78d8);
    FUN_03f5c2a4(&DAT_091bd390);
    DAT_09517670 = '\x01';
  }
  if (*(int *)(DAT_09181970 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar1 = *(long *)(*(long *)(DAT_09181970 + 0xb8) + 0x40);
  if ((lVar1 != 0) && (lVar1 = FUN_0635e660(lVar1,DAT_091bd390), lVar1 != 0)) {
    lVar1 = FUN_043253c0(lVar1,DAT_091b78d8);
    if (*(int *)(DAT_0918e708 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918e708);
    }
    uVar2 = UnityEngine_Awaitable_AwaitableHandle__op_Implicit(param_1,0);
    if (lVar1 != 0) {
      *(undefined8 *)(lVar1 + 0x18) = uVar2;
      uVar2 = System_Runtime_InteropServices_GCHandle__Alloc(lVar1,0);
      uVar2 = System_Runtime_InteropServices_GCHandle__ToIntPtr(uVar2,0);
      uVar2 = System_IntPtr__op_Explicit(uVar2,0);
      uVar2 = System_UIntPtr__op_Explicit(uVar2,0);
      UnityEngine_Awaitable__AttachManagedGCHandleToNativeAwaitable(param_1,uVar2,0);
      if (*(int *)(DAT_09182348 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = System_Threading_CancellationToken__get_CanBeCanceled(&local_28,0);
      uVar2 = local_28;
      if ((uVar3 & 1) != 0) {
        if (*(int *)(DAT_09181970 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_04325044(lVar1,uVar2,0);
      }
      return lVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

