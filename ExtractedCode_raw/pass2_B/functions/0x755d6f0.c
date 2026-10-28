// rea decompile_all
// name: System.Collections.Hashtable$$.ctor
// address: 0x755d6f0
// body: available
// range: 0x755d6f0-0x755d997 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x755d938 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x755d994 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Collections_Hashtable___ctor(float param_1,long param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  undefined8 local_38;
  undefined8 local_28;
  
  if ((DAT_0952199d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185028);
    FUN_03f5c2a4(&DAT_09180a48);
    DAT_0952199d = 1;
  }
  System_Object___ctor(param_2,0);
  if (param_3 < 0) {
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar3 = thunk_FUN_03f9944c();
    uVar2 = thunk_FUN_03fc39d4(&DAT_092188d0);
    uVar4 = thunk_FUN_03fc39d4(&DAT_09208d80);
    System_ArgumentOutOfRangeException___ctor(uVar3,uVar2,uVar4,0);
  }
  else {
    if ((param_1 < 0.1) || (1.0 < param_1)) {
      local_28 = 0x3fb999999999999a;
      uVar2 = FUN_03f5c42c(DAT_09535458,&local_28);
      local_38 = 0x3ff0000000000000;
      uVar4 = FUN_03f5c42c(DAT_09535458,&local_38);
      uVar3 = thunk_FUN_03fc39d4(&DAT_09206f70);
      uVar2 = SR__Format(uVar3,uVar2,uVar4,0);
      thunk_FUN_03fc39d4(&DAT_09181558);
      uVar4 = thunk_FUN_03f9944c();
      uVar3 = thunk_FUN_03fc39d4(&DAT_0921e9b8);
      System_ArgumentOutOfRangeException___ctor(uVar4,uVar3,uVar2,0);
      uVar2 = thunk_FUN_03fc39d4(&DAT_091ce6f0);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar4,uVar2);
    }
    fVar5 = (float)param_3 / (param_1 * 0.72);
    *(float *)(param_2 + 0x24) = param_1 * 0.72;
    if (fVar5 <= 2.1474836e+09) {
      if (fVar5 <= 3.0) {
        iVar1 = 3;
      }
      else {
        if (*(int *)(DAT_09185028 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        iVar1 = -0x80000000;
        if (fVar5 != INFINITY) {
          iVar1 = (int)fVar5;
        }
        iVar1 = System_Collections_HashHelpers__GetPrime(iVar1,0);
      }
      uVar2 = FUN_03f5c394(DAT_09180a48,iVar1);
      *(undefined8 *)(param_2 + 0x10) = uVar2;
      thunk_FUN_03f5d7b8((undefined8 *)(param_2 + 0x10),uVar2);
      fVar5 = *(float *)(param_2 + 0x24) * (float)iVar1;
      iVar1 = -0x80000000;
      if (fVar5 != INFINITY) {
        iVar1 = (int)fVar5;
      }
      *(int *)(param_2 + 0x20) = iVar1;
      thunk_FUN_03f6a5cc();
      *(undefined1 *)(param_2 + 0x2c) = 0;
      return;
    }
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar3 = thunk_FUN_03f9944c();
    uVar2 = thunk_FUN_03fc39d4(&DAT_09203de8);
    uVar4 = thunk_FUN_03fc39d4(&DAT_092188d0);
    System_ArgumentException___ctor(uVar3,uVar2,uVar4,0);
  }
  uVar2 = thunk_FUN_03fc39d4(&DAT_091ce6f0);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar3,uVar2);
}

