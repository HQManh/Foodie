// rea decompile_all
// name: FUN_03f846bc
// address: 0x3f846bc
// body: available
// range: 0x3f846bc-0x3f847b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3f847b0 to 0x89dbde0 <EXTERNAL>::exit (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03f846bc(long *param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ushort uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long local_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  if ((ulong)(*(long *)(param_2 + 0x58) - *(long *)(param_2 + 0x30)) < 0xfffffffffffffff) {
    uVar2 = FUN_03f84238(param_2,param_4);
    if ((uVar2 & 1) != 0) {
      *(long *)(param_2 + 0x30) = *(long *)(param_2 + 0x30) + -1;
    }
    uVar2 = param_4 / 0x30;
    plVar5 = (long *)(param_2 + 0x38);
    lVar3 = *plVar5 + uVar2 * 0x10;
    uVar1 = *(ushort *)(lVar3 + 8);
    FUN_03f83f38(lVar3,(int)param_4 + (int)uVar2 * -0x30,param_3);
    *(ulong *)(param_2 + 0x58) =
         (*(long *)(param_2 + 0x58) - (ulong)uVar1) + (ulong)*(ushort *)(*plVar5 + uVar2 * 0x10 + 8)
    ;
    FUN_03f78cc4(&local_60,plVar5,param_4);
    lVar3 = *plVar5;
    lVar4 = *(long *)(param_2 + 0x40);
    *param_1 = param_2;
    param_1[2] = lStack_58;
    param_1[1] = local_60;
    param_1[4] = lStack_48;
    param_1[3] = lStack_50;
    param_1[5] = lVar3;
    param_1[6] = lVar4;
    param_1[7] = lVar4;
    param_1[8] = 0;
    FUN_03f842d4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}

