// rea decompile_all
// name: System.Globalization.HebrewNumber$$.cctor
// address: 0x7508958
// body: available
// range: 0x7508958-0x7508c1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7508c10 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7508c14 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7508c18 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Globalization_HebrewNumber___cctor(void)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if ((DAT_095216b8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180a50);
    FUN_03f5c2a4(&DAT_09185068);
    FUN_03f5c2a4(&DAT_09180a58);
    FUN_03f5c2a4(&DAT_091f4078);
    DAT_095216b8 = 1;
  }
  lVar2 = FUN_03f5c394(DAT_09180a58,0x1b);
  if (lVar2 != 0) {
    uVar1 = *(uint *)(lVar2 + 0x18);
    if (((((((uVar1 == 0) || (*(undefined4 *)(lVar2 + 0x20) = 0x10004, uVar1 == 1)) ||
           (*(undefined4 *)(lVar2 + 0x24) = 0x20004, uVar1 < 3)) ||
          ((*(undefined4 *)(lVar2 + 0x28) = 0x30004, uVar1 == 3 ||
           (*(undefined4 *)(lVar2 + 0x2c) = 0x40004, uVar1 < 5)))) ||
         (*(undefined4 *)(lVar2 + 0x30) = 0x50004, uVar1 == 5)) ||
        (((((*(undefined4 *)(lVar2 + 0x34) = 0x60005, uVar1 < 7 ||
            (*(undefined4 *)(lVar2 + 0x38) = 0x70005, uVar1 == 7)) ||
           ((*(undefined4 *)(lVar2 + 0x3c) = 0x80004, uVar1 < 9 ||
            (((*(undefined4 *)(lVar2 + 0x40) = 0x90007, uVar1 == 9 ||
              (*(undefined4 *)(lVar2 + 0x44) = 0xa0003, uVar1 < 0xb)) ||
             (*(undefined4 *)(lVar2 + 0x48) = 0xffffffff, uVar1 == 0xb)))))) ||
          (((*(undefined4 *)(lVar2 + 0x4c) = 0x140003, uVar1 < 0xd ||
            (*(undefined4 *)(lVar2 + 0x50) = 0x1e0003, uVar1 == 0xd)) ||
           ((*(undefined4 *)(lVar2 + 0x54) = 0xffffffff, uVar1 < 0xf ||
            ((((*(undefined4 *)(lVar2 + 0x58) = 0x280003, uVar1 == 0xf ||
               (*(undefined4 *)(lVar2 + 0x5c) = 0xffffffff, uVar1 < 0x11)) ||
              ((*(undefined4 *)(lVar2 + 0x60) = 0x320003, uVar1 == 0x11 ||
               (((*(undefined4 *)(lVar2 + 100) = 0x3c0003, uVar1 < 0x13 ||
                 (*(undefined4 *)(lVar2 + 0x68) = 0x460003, uVar1 == 0x13)) ||
                (*(undefined4 *)(lVar2 + 0x6c) = 0xffffffff, uVar1 < 0x15)))))) ||
             ((*(undefined4 *)(lVar2 + 0x70) = 0x500003, uVar1 == 0x15 ||
              (*(undefined4 *)(lVar2 + 0x74) = 0xffffffff, uVar1 < 0x17)))))))))) ||
         (*(undefined4 *)(lVar2 + 0x78) = 0x5a0003, uVar1 == 0x17)))) ||
       (((*(undefined4 *)(lVar2 + 0x7c) = 0x640002, uVar1 < 0x19 ||
         (*(undefined4 *)(lVar2 + 0x80) = 0xc80001, uVar1 == 0x19)) ||
        (*(undefined4 *)(lVar2 + 0x84) = 0x12c0001, uVar1 < 0x1b)))) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    *(undefined4 *)(lVar2 + 0x88) = 0x1900000;
    **(long **)(DAT_09185068 + 0xb8) = lVar2;
    thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09185068 + 0xb8));
    uVar3 = DAT_09180a50;
    lVar2 = **(long **)(DAT_09185068 + 0xb8);
    if (lVar2 != 0) {
      *(short *)(*(long **)(DAT_09185068 + 0xb8) + 1) = *(short *)(lVar2 + 0x18) + 0x5cf;
      uVar3 = FUN_03f5c394(uVar3,0xaa);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar3,DAT_091f4078,0);
      puVar4 = (undefined8 *)(*(long *)(DAT_09185068 + 0xb8) + 0x10);
      *puVar4 = uVar3;
      thunk_FUN_03f5d7b8(puVar4,uVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

