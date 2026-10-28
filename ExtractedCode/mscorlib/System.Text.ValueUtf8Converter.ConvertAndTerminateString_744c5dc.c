// rea decompile_all
// name: System.Text.ValueUtf8Converter$$ConvertAndTerminateString
// address: 0x744c5dc
// body: available
// range: 0x744c5dc-0x744c7df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x744c7a4 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x744c7d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x744c7dc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
System_Text_ValueUtf8Converter__ConvertAndTerminateString
          (long *param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  
  if ((DAT_095210c2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09197190);
    FUN_03f5c2a4(&DAT_09175020);
    FUN_03f5c2a4(&DAT_091b9810);
    FUN_03f5c2a4(&DAT_091ba918);
    FUN_03f5c2a4(&DAT_091ba8d8);
    FUN_03f5c2a4(&DAT_091ba928);
    DAT_095210c2 = 1;
  }
  plVar3 = (long *)System_Text_Encoding__get_UTF8();
  if (plVar3 != (long *)0x0) {
    iVar1 = (**(code **)(*plVar3 + 0x348))
                      (plVar3,param_3 & 0xffffffff,*(undefined8 *)(*plVar3 + 0x350));
    if ((int)param_1[2] < iVar1 + 1) {
      System_Text_ValueUtf8Converter__Dispose(param_1);
      if (*(int *)(DAT_09175020 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar5 = DAT_09197190;
      lVar4 = *(long *)(DAT_09197190 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c();
      }
      if (*(int *)(lVar4 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar5 = *(long *)(lVar5 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03f95a6c();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03f95a6c();
      }
      plVar3 = (long *)**(long **)(lVar5 + 0xb8);
      if (plVar3 == (long *)0x0) goto LAB_0744c7d8;
      lVar5 = (**(code **)(*plVar3 + 0x178))(plVar3,iVar1 + 1,*(undefined8 *)(*plVar3 + 0x180));
      *param_1 = lVar5;
      if (lVar5 == 0) {
        lVar5 = 0;
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined4 *)(lVar5 + 0x18);
        lVar5 = lVar5 + 0x20;
      }
      param_1[1] = lVar5;
      *(undefined4 *)(param_1 + 2) = uVar6;
      *(undefined4 *)((long)param_1 + 0x14) = 0;
    }
    plVar3 = (long *)System_Text_Encoding__get_UTF8();
    if (plVar3 != (long *)0x0) {
      uVar2 = (**(code **)(*plVar3 + 0x3b8))
                        (plVar3,param_2,param_3,param_1[1],param_1[2],
                         *(undefined8 *)(*plVar3 + 0x3c0));
      if (*(uint *)(param_1 + 2) <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      *(undefined1 *)(param_1[1] + (long)(int)uVar2) = 0;
      if (*(uint *)(param_1 + 2) <= uVar2) {
                    /* WARNING: Subroutine does not return */
        System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
      }
      lVar5 = param_1[1];
      if ((*(ushort *)(*(long *)(DAT_091ba918 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      auVar7._8_4_ = uVar2 + 1;
      auVar7._0_8_ = lVar5;
      auVar7._12_4_ = 0;
      return auVar7;
    }
  }
LAB_0744c7d8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

