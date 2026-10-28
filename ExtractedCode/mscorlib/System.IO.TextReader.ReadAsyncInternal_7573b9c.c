// rea decompile_all
// name: System.IO.TextReader$$ReadAsyncInternal
// address: 0x7573b9c
// body: available
// range: 0x7573b9c-0x7573de7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7573da0 to 0x75c7dec System.ThrowHelper$$ThrowArgumentNullException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7573de4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
System_IO_TextReader__ReadAsyncInternal
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  ulong local_60;
  undefined4 local_58;
  undefined2 local_54;
  undefined1 local_52;
  undefined1 uStack_51;
  
  if ((DAT_09521a4e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09178d98);
    FUN_03f5c2a4(&DAT_091bc848);
    FUN_03f5c2a4(&DAT_0918b908);
    FUN_03f5c2a4(&DAT_091bcc78);
    FUN_03f5c2a4(&DAT_091bd658);
    FUN_03f5c2a4(&DAT_0917efc0);
    FUN_03f5c2a4(&DAT_091f0d08);
    FUN_03f5c2a4(&DAT_09195010);
    FUN_03f5c2a4(&DAT_091beb68);
    DAT_09521a4e = 1;
  }
  uVar2 = thunk_FUN_03f9944c(DAT_0917efc0);
  FUN_063a7e4c(uVar2,param_1,param_2,param_3,DAT_091bd658);
  lVar3 = FUN_062eba68(DAT_091bcc78);
  if (*(int *)(DAT_09195010 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09195010);
  }
  puVar6 = *(undefined8 **)(DAT_09195010 + 0xb8);
  lVar7 = puVar6[1];
  if (lVar7 == 0) {
    if (*(int *)(DAT_09195010 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09195010);
      puVar6 = *(undefined8 **)(DAT_09195010 + 0xb8);
    }
    uVar8 = *puVar6;
    lVar7 = thunk_FUN_03f9944c(DAT_09178d98);
    FUN_053239c8(lVar7,uVar8,DAT_091f0d08,0);
    plVar4 = (long *)(*(long *)(DAT_09195010 + 0xb8) + 8);
    *plVar4 = lVar7;
    thunk_FUN_03f5d7b8(plVar4,lVar7);
  }
  if (*(int *)(DAT_0918b908 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_0951988b == '\0') {
    FUN_03f5c2a4(&DAT_0918b908);
    DAT_0951988b = '\x01';
  }
  if (*(int *)(DAT_0918b908 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (lVar3 != 0) {
    uVar5 = FUN_0624f800(lVar3,lVar7,uVar2,param_4,8,**(undefined8 **)(DAT_0918b908 + 0xb8),
                         DAT_091bc848);
    local_60 = 0;
    local_58 = 0;
    local_54 = 0;
    local_52 = 0;
    uStack_51 = 0;
    if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      System_ThrowHelper__ThrowArgumentNullException(0x26,0);
    }
    local_60 = uVar5;
    thunk_FUN_03f5d7b8(&local_60,uVar5);
    auVar1._8_6_ = 0;
    auVar1._0_8_ = local_60;
    auVar1[0xe] = 1;
    auVar1[0xf] = uStack_51;
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

