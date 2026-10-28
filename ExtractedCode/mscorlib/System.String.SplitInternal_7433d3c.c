// rea decompile_all
// name: System.String$$SplitInternal
// address: 0x7433d3c
// body: available
// range: 0x7433d3c-0x7433f2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7433f10 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7433f24 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7433f28 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_String__SplitInternal(undefined8 param_1,long param_2,undefined4 param_3,int param_4)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_280 [512];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if ((DAT_09521027 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b9890);
    FUN_03f5c2a4(&DAT_091baae0);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_091beb20);
    FUN_03f5c2a4(&DAT_091beb28);
    FUN_03f5c2a4(&DAT_091beb10);
    DAT_09521027 = 1;
  }
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  memset(auStack_280,0,0x200);
  FUN_0655f144(&local_80,auStack_280,0x80,DAT_091beb10);
  System_String__MakeSeparatorList(param_1,param_2,&local_80);
  auVar3 = FUN_0655f1ec(&local_80,DAT_091beb20);
  if (auVar3._8_4_ == 0) {
    lVar2 = FUN_03f5c394(DAT_091805f8,1);
    if (lVar2 == 0) goto LAB_07433f00;
    if (*(int *)(lVar2 + 0x18) == 0) {
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      goto LAB_07433f28;
    }
    *(undefined8 *)(lVar2 + 0x20) = param_1;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x20),param_1);
  }
  else {
    if (param_4 == 1) {
      if (param_2 == 0) {
LAB_07433f00:
        if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        goto LAB_07433f28;
      }
      lVar2 = System_String__SplitOmitEmptyEntries
                        (param_1,auVar3._0_8_,auVar3._8_8_,0,0,*(undefined4 *)(param_2 + 0x10),
                         param_3);
    }
    else {
      if (param_2 == 0) goto LAB_07433f00;
      lVar2 = System_String__SplitKeepEmptyEntries
                        (param_1,auVar3._0_8_,auVar3._8_8_,0,0,*(undefined4 *)(param_2 + 0x10),
                         param_3);
    }
    FUN_074366bc(&local_80,DAT_091beb28);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return lVar2;
  }
LAB_07433f28:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

