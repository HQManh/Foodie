// rea decompile_all
// name: System.Security.Cryptography.RijndaelManagedTransform$$TransformBlock
// address: 0x7463e38
// body: available
// range: 0x7463e38-0x7464107 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7464064 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7464104 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_Security_Cryptography_RijndaelManagedTransform__TransformBlock
                (long param_1,long param_2,int param_3,int param_4,long param_5,int param_6)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  long local_48;
  
  local_48 = param_5;
  if ((DAT_0952119f & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    DAT_0952119f = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar4 = thunk_FUN_03f9944c();
    puVar5 = &DAT_0921d580;
LAB_0746403c:
    uVar6 = thunk_FUN_03fc39d4(puVar5);
    System_ArgumentNullException___ctor(uVar4,uVar6,0);
    uVar6 = thunk_FUN_03fc39d4(&DAT_091d8088);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,uVar6);
  }
  if (param_5 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar4 = thunk_FUN_03f9944c();
    puVar5 = &DAT_09220820;
    goto LAB_0746403c;
  }
  if (param_3 < 0) {
    uVar4 = thunk_FUN_03fc39d4(&DAT_09208d80);
    uVar4 = System_Environment__GetResourceString(uVar4,0);
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar8 = thunk_FUN_03f9944c();
    uVar6 = thunk_FUN_03fc39d4(&DAT_0921d5a8);
    System_ArgumentOutOfRangeException___ctor(uVar8,uVar6,uVar4,0);
    goto LAB_074640f0;
  }
  if (param_4 < 1) {
LAB_07463ff4:
    puVar7 = (undefined8 *)&DAT_09212d68;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x24);
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = param_4 / iVar2;
    }
    if ((param_4 != iVar1 * iVar2) || (*(int *)(param_2 + 0x18) < param_4)) goto LAB_07463ff4;
    if (param_3 <= *(int *)(param_2 + 0x18) - param_4) {
      uVar9 = *(uint *)(param_1 + 0x14);
      if (*(int *)(param_1 + 0x18) == 0) {
        uVar3 = System_Security_Cryptography_RijndaelManagedTransform__EncryptData
                          (param_1,param_2,param_3,param_4,&local_48,param_6,uVar9,0);
      }
      else {
        if ((uVar9 | 2) != 3) {
          lVar10 = *(long *)(param_1 + 0x70);
          if (lVar10 != 0) {
            System_Security_Cryptography_RijndaelManagedTransform__DecryptData
                      (param_1,lVar10,0,*(undefined4 *)(lVar10 + 0x18),&local_48,param_6,uVar9,0);
            iVar2 = *(int *)(param_1 + 0x28);
            param_4 = param_4 - *(int *)(param_1 + 0x24);
            thunk_FUN_03f6c31c(param_2,param_4 + param_3,*(undefined8 *)(param_1 + 0x70),0,
                               *(int *)(param_1 + 0x24),0);
            iVar2 = System_Security_Cryptography_RijndaelManagedTransform__DecryptData
                              (param_1,param_2,param_3,param_4,&local_48,iVar2 + param_6,
                               *(undefined4 *)(param_1 + 0x14),0);
            return (ulong)(uint)(*(int *)(param_1 + 0x28) + iVar2);
          }
          uVar4 = FUN_03f5c394(DAT_0917fc88);
          *(undefined8 *)(param_1 + 0x70) = uVar4;
          thunk_FUN_03f5d7b8((long *)(param_1 + 0x70),uVar4);
          param_4 = param_4 - *(int *)(param_1 + 0x24);
          thunk_FUN_03f6c31c(param_2,param_4 + param_3,*(undefined8 *)(param_1 + 0x70),0,
                             *(int *)(param_1 + 0x24),0);
          uVar9 = *(uint *)(param_1 + 0x14);
        }
        uVar3 = System_Security_Cryptography_RijndaelManagedTransform__DecryptData
                          (param_1,param_2,param_3,param_4,&local_48,param_6,uVar9,0);
      }
      return uVar3;
    }
    puVar7 = &DAT_09209710;
  }
  uVar4 = thunk_FUN_03fc39d4(puVar7);
  uVar4 = System_Environment__GetResourceString(uVar4,0);
  thunk_FUN_03fc39d4(&DAT_09181548);
  uVar8 = thunk_FUN_03f9944c();
  System_ArgumentException___ctor(uVar8,uVar4,0);
LAB_074640f0:
  uVar4 = thunk_FUN_03fc39d4(&DAT_091d8088);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar8,uVar4);
}

