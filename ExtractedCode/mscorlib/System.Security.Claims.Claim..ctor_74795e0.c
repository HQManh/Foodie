// rea decompile_all
// name: System.Security.Claims.Claim$$.ctor
// address: 0x74795e0
// body: available
// range: 0x74795e0-0x747988f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7479888 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x747988c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Security_Claims_Claim___ctor
               (long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7,long param_8,undefined8 param_9)

{
  undefined8 uVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  
  if ((DAT_09521233 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917a220);
    FUN_03f5c2a4(&DAT_09188ac8);
    FUN_03f5c2a4(&DAT_09206850);
    FUN_03f5c2a4(&DAT_0921cf10);
    DAT_09521233 = 1;
  }
  uVar1 = thunk_FUN_03f9944c(DAT_09188ac8);
  System_Object___ctor(uVar1,0);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x48),uVar1);
  System_Object___ctor(param_1,0);
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar1 = thunk_FUN_03f9944c();
    puVar4 = &DAT_09224510;
  }
  else {
    if (param_3 != 0) {
      *(long *)(param_1 + 0x20) = param_2;
      thunk_FUN_03f5d7b8((long *)(param_1 + 0x20),param_2);
      *(long *)(param_1 + 0x28) = param_3;
      thunk_FUN_03f5d7b8((long *)(param_1 + 0x28),param_3);
      uVar2 = System_String__IsNullOrEmpty(param_4,0);
      uVar1 = DAT_0921cf10;
      if ((uVar2 & 1) == 0) {
        *(undefined8 *)(param_1 + 0x30) = param_4;
      }
      else {
        *(undefined8 *)(param_1 + 0x30) = DAT_0921cf10;
        param_4 = uVar1;
      }
      thunk_FUN_03f5d7b8(param_1 + 0x30,param_4);
      uVar2 = System_String__IsNullOrEmpty(param_5,0);
      uVar1 = DAT_09206850;
      if ((uVar2 & 1) == 0) {
        *(undefined8 *)(param_1 + 0x10) = param_5;
      }
      else {
        *(undefined8 *)(param_1 + 0x10) = DAT_09206850;
        param_5 = uVar1;
      }
      thunk_FUN_03f5d7b8(param_1 + 0x10,param_5);
      uVar2 = System_String__IsNullOrEmpty(param_6,0);
      if ((uVar2 & 1) == 0) {
        *(undefined8 *)(param_1 + 0x18) = param_6;
      }
      else {
        param_6 = *(undefined8 *)(param_1 + 0x10);
        *(undefined8 *)(param_1 + 0x18) = param_6;
      }
      thunk_FUN_03f5d7b8(param_1 + 0x18,param_6);
      *(undefined8 *)(param_1 + 0x50) = param_7;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x50),param_7);
      if (param_8 == 0) {
        return;
      }
      plVar3 = (long *)System_Security_Claims_Claim__get_Properties(param_1);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar6 = *plVar3;
      uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_0917a220) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar7 + 5) * 0x10 + 0x138);
            goto LAB_074797f8;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917a220,5);
LAB_074797f8:
                    /* WARNING: Could not recover jumptable at 0x07479820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar4)(plVar3,param_8,param_9,puVar4[1]);
      return;
    }
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar1 = thunk_FUN_03f9944c();
    puVar4 = &DAT_09225370;
  }
  uVar5 = thunk_FUN_03fc39d4(puVar4);
  System_ArgumentNullException___ctor(uVar1,uVar5,0);
  uVar5 = thunk_FUN_03fc39d4(&DAT_091c4be0);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar1,uVar5);
}

