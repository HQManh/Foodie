// rea decompile_all
// name: System.Text.UnicodeEncoding$$.cctor
// address: 0x744b7f4
// body: available
// range: 0x744b7f4-0x744b9a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x744b9a0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x744b9a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Text_UnicodeEncoding___cctor(void)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  if ((DAT_095210b6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_0918c640);
    DAT_095210b6 = 1;
  }
  plVar1 = (long *)thunk_FUN_03f9944c(DAT_0918c640);
  *(undefined1 *)((long)plVar1 + 0x3a) = 1;
  *(undefined1 *)((long)plVar1 + 0x21) = 1;
  System_Object___ctor(plVar1,0);
  *(undefined4 *)(plVar1 + 2) = 0x4b1;
  (**(code **)(*plVar1 + 0x188))(plVar1,*(undefined8 *)(*plVar1 + 400));
  lVar2 = DAT_0918c640;
  *(undefined2 *)(plVar1 + 7) = 0x100;
  plVar3 = *(long **)(lVar2 + 0xb8);
  *(undefined1 *)((long)plVar1 + 0x3a) = 1;
  *plVar3 = (long)plVar1;
  thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_0918c640 + 0xb8),plVar1);
  plVar1 = (long *)thunk_FUN_03f9944c(DAT_0918c640);
  *(undefined1 *)((long)plVar1 + 0x3a) = 1;
  *(undefined1 *)((long)plVar1 + 0x21) = 1;
  System_Object___ctor(plVar1,0);
  *(undefined4 *)(plVar1 + 2) = 0x4b0;
  (**(code **)(*plVar1 + 0x188))(plVar1,*(undefined8 *)(*plVar1 + 400));
  lVar2 = DAT_0918c640;
  *(undefined2 *)(plVar1 + 7) = 0;
  *(undefined1 *)((long)plVar1 + 0x3a) = 1;
  plVar3 = (long *)(*(long *)(lVar2 + 0xb8) + 8);
  *plVar3 = (long)plVar1;
  thunk_FUN_03f5d7b8(plVar3,plVar1);
  lVar2 = FUN_03f5c394(DAT_0917fc88,2);
  if (lVar2 != 0) {
    if ((*(int *)(lVar2 + 0x18) != 0) &&
       (*(undefined1 *)(lVar2 + 0x20) = 0xfe, *(int *)(lVar2 + 0x18) != 1)) {
      *(undefined1 *)(lVar2 + 0x21) = 0xff;
      *(long *)(*(long *)(DAT_0918c640 + 0xb8) + 0x10) = lVar2;
      thunk_FUN_03f5d7b8();
      lVar2 = FUN_03f5c394(DAT_0917fc88,2);
      if (lVar2 == 0) goto LAB_0744b9a4;
      if ((*(int *)(lVar2 + 0x18) != 0) &&
         (*(undefined1 *)(lVar2 + 0x20) = 0xff, *(int *)(lVar2 + 0x18) != 1)) {
        *(undefined1 *)(lVar2 + 0x21) = 0xfe;
        *(long *)(*(long *)(DAT_0918c640 + 0xb8) + 0x18) = lVar2;
        thunk_FUN_03f5d7b8();
        *(undefined8 *)(*(long *)(DAT_0918c640 + 0xb8) + 0x20) = 0xdc00d800dc00d800;
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
LAB_0744b9a4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

