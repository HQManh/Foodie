// rea decompile_all
// name: System.Diagnostics.StackTrace$$init_frames
// address: 0x754ebe0
// body: available
// range: 0x754ebe0-0x754edf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x754ed90 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x754ed94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x754edf0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Diagnostics_StackTrace__init_frames(long param_1,int param_2,byte param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  
  if ((DAT_09521925 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b0488);
    FUN_03f5c2a4(&DAT_091b0490);
    FUN_03f5c2a4(&DAT_091b0480);
    FUN_03f5c2a4(&DAT_0917ccb0);
    FUN_03f5c2a4(&DAT_0918b0f8);
    DAT_09521925 = 1;
  }
  if (param_2 < 0) {
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar5 = thunk_FUN_03f9944c();
    uVar8 = thunk_FUN_03fc39d4(&DAT_091fa160);
    uVar9 = thunk_FUN_03fc39d4(&DAT_09222de0);
    System_ArgumentOutOfRangeException___ctor(uVar5,uVar8,uVar9,0);
    uVar8 = thunk_FUN_03fc39d4(&DAT_091d9f30);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar5,uVar8);
  }
  lVar3 = thunk_FUN_03f9944c(DAT_0917ccb0);
  FUN_057e0400(lVar3,DAT_091b0480);
  plVar4 = (long *)thunk_FUN_03f9944c(DAT_0918b0f8);
  System_Diagnostics_StackFrame___ctor(plVar4,param_2 + 2,param_3 & 1);
  if (plVar4 == (long *)0x0) {
LAB_0754ed54:
    *(byte *)(param_1 + 0x20) = param_3 & 1;
    if (lVar3 == 0) {
LAB_0754ed94:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  else {
    param_2 = param_2 + 3;
    do {
      uVar5 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
      uVar6 = System_Reflection_MethodBase__op_Inequality(uVar5,0,0);
      lVar2 = DAT_091b0488;
      if ((uVar6 & 1) == 0) goto LAB_0754ed54;
      if (lVar3 == 0) goto LAB_0754ed94;
      lVar10 = *(long *)(lVar3 + 0x10);
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar10 == 0) goto LAB_0754ed94;
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        plVar7 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
        *plVar7 = (long)plVar4;
        thunk_FUN_03f5d7b8(plVar7,plVar4);
      }
      else {
        FUN_057e0c68(lVar3,plVar4,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
        ;
      }
      plVar4 = (long *)thunk_FUN_03f9944c(DAT_0918b0f8);
      System_Diagnostics_StackFrame___ctor(plVar4,param_2,param_3 & 1);
      param_2 = param_2 + 1;
    } while (plVar4 != (long *)0x0);
    *(byte *)(param_1 + 0x20) = param_3 & 1;
  }
  uVar5 = FUN_057e28a4(lVar3,DAT_091b0490);
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x10),uVar5);
  return;
}

