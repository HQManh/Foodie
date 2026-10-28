// rea decompile_all
// name: Mono.Security.Cryptography.SymmetricTransform$$InternalTransformBlock
// address: 0x7425f50
// body: available
// range: 0x7425f50-0x7426107 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7426104 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int Mono_Security_Cryptography_SymmetricTransform__InternalTransformBlock
              (long *param_1,undefined8 param_2,int param_3,int param_4,undefined8 param_5,
              int param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = *(int *)((long)param_1 + 0x1c);
  if (iVar3 == param_4) {
    iVar5 = 1;
  }
  else {
    iVar5 = 0;
    if (iVar3 != 0) {
      iVar5 = param_4 / iVar3;
    }
    if (param_4 != iVar5 * iVar3) {
      thunk_FUN_03fc39d4(&DAT_09182f98);
      uVar1 = thunk_FUN_03f9944c();
      uVar2 = thunk_FUN_03fc39d4(&DAT_09205840);
      System_Security_Cryptography_CryptographicException___ctor(uVar1,uVar2,0);
      uVar2 = thunk_FUN_03fc39d4(&DAT_091daae8);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar1,uVar2);
    }
  }
  if ((char)param_1[3] == '\0') {
    iVar5 = iVar5 - (uint)((*(uint *)(param_1 + 8) & 0xfffffffd) != 1);
  }
  if (*(char *)((long)param_1 + 0x49) == '\0') {
    iVar4 = 0;
  }
  else {
    (**(code **)(*param_1 + 0x218))(param_1,param_1[6],param_1[7],*(undefined8 *)(*param_1 + 0x220))
    ;
    System_Buffer__BlockCopy(param_1[7],0,param_5,param_6,*(undefined4 *)((long)param_1 + 0x1c),0);
    iVar4 = *(int *)((long)param_1 + 0x1c);
    *(undefined1 *)((long)param_1 + 0x49) = 0;
    param_6 = iVar4 + param_6;
    iVar3 = iVar4;
  }
  if (0 < iVar5) {
    do {
      System_Buffer__BlockCopy(param_2,param_3,param_1[6],0,iVar3,0);
      (**(code **)(*param_1 + 0x218))
                (param_1,param_1[6],param_1[7],*(undefined8 *)(*param_1 + 0x220));
      System_Buffer__BlockCopy(param_1[7],0,param_5,param_6,*(undefined4 *)((long)param_1 + 0x1c),0)
      ;
      iVar3 = *(int *)((long)param_1 + 0x1c);
      iVar5 = iVar5 + -1;
      param_3 = iVar3 + param_3;
      param_6 = iVar3 + param_6;
      iVar4 = iVar3 + iVar4;
    } while (iVar5 != 0);
  }
  if (((char)param_1[3] == '\0') && ((*(uint *)(param_1 + 8) & 0xfffffffd) != 1)) {
    System_Buffer__BlockCopy(param_2,param_3,param_1[6],0,iVar3,0);
    *(undefined1 *)((long)param_1 + 0x49) = 1;
  }
  return iVar4;
}

