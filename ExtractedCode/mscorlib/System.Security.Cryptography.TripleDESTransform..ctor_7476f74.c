// rea decompile_all
// name: System.Security.Cryptography.TripleDESTransform$$.ctor
// address: 0x7476f74
// body: available
// range: 0x7476f74-0x74772c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x747726c to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7477270 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74772c0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Security_Cryptography_TripleDESTransform___ctor
               (long param_1,long *param_2,uint param_3,long param_4,undefined8 param_5)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  if ((DAT_09521215 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_09183188);
    FUN_03f5c2a4(&DAT_09183178);
    FUN_03f5c2a4(&DAT_0918c0d8);
    DAT_09521215 = 1;
  }
  Mono_Security_Cryptography_SymmetricTransform___ctor(param_1,param_2,param_3 & 1,param_5,0);
  if (param_4 == 0) {
    param_4 = System_Security_Cryptography_TripleDESTransform__GetStrongKey();
  }
  if (*(int *)(DAT_0918c0d8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_Security_Cryptography_TripleDES__IsWeakKey(param_4,0);
  if ((uVar2 & 1) != 0) {
    uVar3 = thunk_FUN_03fc39d4(&DAT_092106b0);
    uVar3 = Locale__GetText(uVar3,0);
    thunk_FUN_03fc39d4(&DAT_09182f98);
    uVar4 = thunk_FUN_03f9944c();
    System_Security_Cryptography_CryptographicException___ctor(uVar4,uVar3,0);
    uVar3 = thunk_FUN_03fc39d4(&DAT_091dbbc0);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,uVar3);
  }
  uVar3 = FUN_03f5c394(DAT_0917fc88,8);
  uVar4 = FUN_03f5c394(DAT_0917fc88,8);
  uVar5 = FUN_03f5c394(DAT_0917fc88,8);
  if (*(int *)(DAT_09183178 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09183178);
  }
  uVar6 = System_Security_Cryptography_DES__Create(0);
  System_Buffer__BlockCopy(param_4,0,uVar3,0,8,0);
  System_Buffer__BlockCopy(param_4,8,uVar4,0,8,0);
  if (param_4 == 0) {
LAB_07477270:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  System_Buffer__BlockCopy(param_4,(ulong)(*(int *)(param_4 + 0x18) != 0x10) << 4,uVar5,0,8,0);
  if ((param_3 & 1) == 0) {
    if (param_2 == (long *)0x0) goto LAB_07477270;
    iVar1 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
    if (iVar1 != 4) {
      uVar7 = thunk_FUN_03f9944c(DAT_09183188);
      System_Security_Cryptography_DESTransform___ctor(uVar7,uVar6,0,uVar5,param_5,0);
      *(undefined8 *)(param_1 + 0x70) = uVar7;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x70),uVar7);
      uVar5 = thunk_FUN_03f9944c(DAT_09183188);
      System_Security_Cryptography_DESTransform___ctor(uVar5,uVar6,1,uVar4,param_5,0);
      *(undefined8 *)(param_1 + 0x78) = uVar5;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x78),uVar5);
      uVar4 = thunk_FUN_03f9944c(DAT_09183188);
      System_Security_Cryptography_DESTransform___ctor(uVar4,uVar6,0,uVar3,param_5,0);
      puVar8 = (undefined8 *)(param_1 + 0x80);
      *puVar8 = uVar4;
      goto LAB_0747724c;
    }
  }
  uVar7 = thunk_FUN_03f9944c(DAT_09183188);
  System_Security_Cryptography_DESTransform___ctor(uVar7,uVar6,1,uVar3,param_5,0);
  *(undefined8 *)(param_1 + 0x58) = uVar7;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x58),uVar7);
  uVar3 = thunk_FUN_03f9944c(DAT_09183188);
  System_Security_Cryptography_DESTransform___ctor(uVar3,uVar6,0,uVar4,param_5,0);
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x60),uVar3);
  uVar4 = thunk_FUN_03f9944c(DAT_09183188);
  System_Security_Cryptography_DESTransform___ctor(uVar4,uVar6,1,uVar5,param_5,0);
  puVar8 = (undefined8 *)(param_1 + 0x68);
  *puVar8 = uVar4;
LAB_0747724c:
  thunk_FUN_03f5d7b8(puVar8,uVar4);
  return;
}

