// rea decompile_all
// name: System.Security.Cryptography.RijndaelManagedTransform$$TransformFinalBlock
// address: 0x7465850
// body: available
// range: 0x7465850-0x7465b17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74659f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7465a3c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7465adc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_Security_Cryptography_RijndaelManagedTransform__TransformFinalBlock
          (long param_1,long param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 local_48 [3];
  
  if ((DAT_095211a0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    DAT_095211a0 = 1;
  }
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[0] = 0;
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar7 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_0921d580);
    System_ArgumentNullException___ctor(uVar7,uVar5,0);
    uVar5 = thunk_FUN_03fc39d4(&DAT_091d8090);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar7,uVar5);
  }
  if (param_3 < 0) {
    uVar7 = thunk_FUN_03fc39d4(&DAT_09208d80);
    uVar7 = System_Environment__GetResourceString(uVar7,0);
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar8 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_0921d5a8);
    System_ArgumentOutOfRangeException___ctor(uVar8,uVar5,uVar7,0);
    goto LAB_07465ac8;
  }
  if (param_4 < 0) {
LAB_074659e8:
    puVar6 = (undefined8 *)&DAT_09212d68;
  }
  else {
    if (*(int *)(param_2 + 0x18) < param_4) goto LAB_074659e8;
    if (param_3 <= *(int *)(param_2 + 0x18) - param_4) {
      if (*(int *)(param_1 + 0x18) == 0) {
        local_48[2] = 0;
        puVar6 = local_48 + 2;
        System_Security_Cryptography_RijndaelManagedTransform__EncryptData
                  (param_1,param_2,param_3,param_4,local_48 + 2,0,*(undefined4 *)(param_1 + 0x14),1)
        ;
      }
      else {
        iVar1 = *(int *)(param_1 + 0x24);
        iVar3 = 0;
        if (iVar1 != 0) {
          iVar3 = param_4 / iVar1;
        }
        if (param_4 != iVar3 * iVar1) {
          uVar7 = thunk_FUN_03fc39d4(&DAT_09206bc0);
          uVar7 = System_Environment__GetResourceString(uVar7,0);
          thunk_FUN_03fc39d4(&DAT_09182f98);
          uVar8 = thunk_FUN_03f9944c();
          System_Security_Cryptography_CryptographicException___ctor(uVar8,uVar7);
          goto LAB_07465ac8;
        }
        if (*(long *)(param_1 + 0x70) == 0) {
          uVar2 = *(undefined4 *)(param_1 + 0x14);
          local_48[1] = 0;
          puVar9 = local_48 + 1;
          puVar6 = local_48 + 1;
        }
        else {
          lVar4 = FUN_03f5c394(DAT_0917fc88,*(int *)(*(long *)(param_1 + 0x70) + 0x18) + param_4);
          lVar10 = *(long *)(param_1 + 0x70);
          if (lVar10 == 0) {
LAB_074659f4:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          thunk_FUN_03f6c31c(lVar10,0,lVar4,0,*(undefined4 *)(lVar10 + 0x18),0);
          if (*(long *)(param_1 + 0x70) == 0) goto LAB_074659f4;
          thunk_FUN_03f6c31c(param_2,param_3,lVar4,*(undefined4 *)(*(long *)(param_1 + 0x70) + 0x18)
                             ,param_4,0);
          local_48[0] = 0;
          if (lVar4 == 0) goto LAB_074659f4;
          uVar2 = *(undefined4 *)(param_1 + 0x14);
          param_4 = *(int *)(lVar4 + 0x18);
          puVar9 = local_48;
          param_3 = 0;
          puVar6 = local_48;
          param_2 = lVar4;
        }
        local_48[0] = 0;
        System_Security_Cryptography_RijndaelManagedTransform__DecryptData
                  (param_1,param_2,param_3,param_4,puVar9,0,uVar2,1);
      }
      System_Security_Cryptography_RijndaelManagedTransform__Reset(param_1);
      return *puVar6;
    }
    puVar6 = &DAT_09209710;
  }
  uVar7 = thunk_FUN_03fc39d4(puVar6);
  uVar7 = System_Environment__GetResourceString(uVar7,0);
  thunk_FUN_03fc39d4(&DAT_09181548);
  uVar8 = thunk_FUN_03f9944c();
  System_ArgumentException___ctor(uVar8,uVar7,0);
LAB_07465ac8:
  uVar7 = thunk_FUN_03fc39d4(&DAT_091d8090);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar8,uVar7);
}

