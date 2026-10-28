// rea decompile_all
// name: CookingGraph.Execution.CookingAssemblySlot$$.ctor
// address: 0x44a17a8
// body: available
// range: 0x44a17a8-0x44a198b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44a1940 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44a1988 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_Execution_CookingAssemblySlot___ctor
               (undefined8 param_1,long param_2,uint param_3,uint param_4,long param_5,long param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((DAT_095181ea & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0060);
    FUN_03f5c2a4(&DAT_091c0238);
    FUN_03f5c2a4(&DAT_091c9920);
    FUN_03f5c2a4(&DAT_091cae30);
    FUN_03f5c2a4(&DAT_0921f520);
    FUN_03f5c2a4(&DAT_091f5700);
    DAT_095181ea = 1;
  }
  System_Object___ctor(param_2,0);
  if (-1 < (int)(param_4 | param_3)) {
    CookingGraph_Execution_CookingExecution__RequireTime(param_1,DAT_0921f520);
    lVar1 = DAT_091f5700;
    if (param_6 != 0) {
      lVar1 = param_6;
    }
    *(long *)(param_2 + 0x18) = lVar1;
    *(uint *)(param_2 + 0x10) = param_3;
    *(uint *)(param_2 + 0x14) = param_4;
    *(undefined8 *)(param_2 + 0x20) = param_1;
    thunk_FUN_03f5d7b8();
    lVar1 = DAT_091c0238;
    if (param_5 == 0) {
      lVar4 = *(long *)(DAT_091c0238 + 0x38);
      if (lVar4 == 0) {
        FUN_03f95ac8(DAT_091c0238);
        lVar4 = *(long *)(lVar1 + 0x38);
      }
      lVar4 = *(long *)(lVar4 + 0x10);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c();
      }
      if (*(int *)(lVar4 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_03f95a6c();
      }
      param_5 = **(long **)(lVar1 + 0xb8);
    }
    uVar2 = FUN_04add3a4(param_5,DAT_091c9920);
    uVar2 = FUN_04b0462c(uVar2,DAT_091cae30);
    uVar2 = FUN_04df1acc(uVar2,DAT_091c0060);
    *(undefined8 *)(param_2 + 0x28) = uVar2;
    thunk_FUN_03f5d7b8((undefined8 *)(param_2 + 0x28),uVar2);
    return;
  }
  thunk_FUN_03fc39d4(&DAT_09181558);
  uVar2 = thunk_FUN_03f9944c();
  uVar3 = thunk_FUN_03fc39d4(&DAT_0921d4c0);
  System_ArgumentOutOfRangeException___ctor(uVar2,uVar3,0);
  uVar3 = thunk_FUN_03fc39d4(&DAT_091c6340);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar2,uVar3);
}

