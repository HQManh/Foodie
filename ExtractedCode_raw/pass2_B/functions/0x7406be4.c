// rea decompile_all
// name: Mono.Security.Cryptography.PKCS1$$HashNameFromOid
// address: 0x7406be4
// body: available
// range: 0x7406be4-0x7406f6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7406f6c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Mono_Security_Cryptography_PKCS1__HashNameFromOid(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((DAT_09520ec4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091f9ac8);
    FUN_03f5c2a4(&DAT_09207310);
    FUN_03f5c2a4(&DAT_0920c360);
    FUN_03f5c2a4(&DAT_091f9888);
    FUN_03f5c2a4(&DAT_0920c358);
    FUN_03f5c2a4(&DAT_0920c350);
    FUN_03f5c2a4(&DAT_091f9858);
    FUN_03f5c2a4(&DAT_091f9860);
    FUN_03f5c2a4(&DAT_091f97d0);
    FUN_03f5c2a4(&DAT_091f9870);
    FUN_03f5c2a4(&DAT_091f9868);
    FUN_03f5c2a4(&DAT_09207308);
    FUN_03f5c2a4(&DAT_09207318);
    FUN_03f5c2a4(&DAT_091f9880);
    FUN_03f5c2a4(&DAT_0920c368);
    FUN_03f5c2a4(&DAT_091f9878);
    FUN_03f5c2a4(&DAT_091f9a98);
    FUN_03f5c2a4(&DAT_0920b3c8);
    DAT_09520ec4 = 1;
  }
  uVar1 = <PrivateImplementationDetails>__ComputeStringHash(param_1);
  if (uVar1 < 0x2adb999e) {
    if (0x23db8e98 < uVar1) {
      if (uVar1 == 0x24db902b) {
        uVar2 = System_String__op_Equality(param_1,DAT_091f9880,0);
        if ((uVar2 & 1) == 0) goto LAB_07406f08;
        puVar5 = &DAT_09207318;
      }
      else if (uVar1 == 0x29db980a) {
        uVar2 = System_String__op_Equality(param_1,DAT_091f9878,0);
        if ((uVar2 & 1) == 0) goto LAB_07406f08;
        puVar5 = &DAT_09207310;
      }
      else {
        if ((uVar1 != 0x2adb999d) ||
           (uVar2 = System_String__op_Equality(param_1,DAT_091f9870,0), (uVar2 & 1) == 0))
        goto LAB_07406f08;
        puVar5 = &DAT_09207308;
      }
      goto LAB_07406f00;
    }
    if (uVar1 == 0x1e6ebeee) {
      puVar5 = &DAT_091f97d0;
    }
    else {
      if (uVar1 != 0x23db8e98) goto LAB_07406f08;
      puVar5 = &DAT_091f9888;
    }
  }
  else {
    if (0x93ab4b4f < uVar1) {
      if (uVar1 == 0x94ab4ce2) {
        uVar2 = System_String__op_Equality(param_1,DAT_091f9860,0);
        if ((uVar2 & 1) == 0) goto LAB_07406f08;
        puVar5 = &DAT_0920c360;
      }
      else if (uVar1 == 0x95ab4e75) {
        uVar2 = System_String__op_Equality(param_1,DAT_091f9868,0);
        if ((uVar2 & 1) == 0) goto LAB_07406f08;
        puVar5 = &DAT_0920c368;
      }
      else {
        if ((uVar1 != 0xd038ecd7) ||
           (uVar2 = System_String__op_Equality(param_1,DAT_091f9ac8,0), (uVar2 & 1) == 0))
        goto LAB_07406f08;
        puVar5 = &DAT_0920b3c8;
      }
      goto LAB_07406f00;
    }
    if (uVar1 == 0x93ab4b4f) {
      uVar2 = System_String__op_Equality(param_1,DAT_091f9858,0);
      if ((uVar2 & 1) != 0) {
        puVar5 = &DAT_0920c358;
        goto LAB_07406f00;
      }
      goto LAB_07406f08;
    }
    if (uVar1 != 0x342fa1d8) goto LAB_07406f08;
    puVar5 = &DAT_091f9a98;
  }
  uVar2 = System_String__op_Equality(param_1,*puVar5,0);
  if ((uVar2 & 1) == 0) {
LAB_07406f08:
    if ((param_2 & 1) == 0) {
      return 0;
    }
    uVar3 = thunk_FUN_03fc39d4(&DAT_092126d8);
    uVar3 = System_String__Concat(uVar3,param_1,0);
    thunk_FUN_03fc39d4(&DAT_09182f98);
    uVar4 = thunk_FUN_03f9944c();
    System_Security_Cryptography_CryptographicException___ctor(uVar4,uVar3,0);
    uVar3 = thunk_FUN_03fc39d4(&DAT_091d56a8);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,uVar3);
  }
  puVar5 = &DAT_0920c350;
LAB_07406f00:
  return *puVar5;
}

