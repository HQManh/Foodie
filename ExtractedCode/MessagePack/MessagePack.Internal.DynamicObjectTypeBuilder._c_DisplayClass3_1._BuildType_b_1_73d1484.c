// rea decompile_all
// name: MessagePack.Internal.DynamicObjectTypeBuilder.<>c__DisplayClass3_1$$<BuildType>b__1
// address: 0x73d1484
// body: available
// range: 0x73d1484-0x73d1583 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73d1580 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
MessagePack_Internal_DynamicObjectTypeBuilder_<>c__DisplayClass3_1__<BuildType>b__1
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if ((DAT_09520cca & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091a1770);
    FUN_03f5c2a4(&DAT_091e94a8);
    FUN_03f5c2a4(&DAT_091903d8);
    DAT_09520cca = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_091903d8);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x18) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar1 + 0x18),param_1);
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (lVar2 = *(long *)(*(long *)(param_1 + 0x18) + 0x18), lVar2 != 0)) {
      uVar3 = FUN_06fd9fbc(lVar2,param_3,lVar1 + 0x10,DAT_091a1770);
      if ((uVar3 & 1) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = thunk_FUN_03f9944c(DAT_09180e78);
        System_Action___ctor(uVar4,lVar1,DAT_091e94a8,0);
      }
      return uVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

