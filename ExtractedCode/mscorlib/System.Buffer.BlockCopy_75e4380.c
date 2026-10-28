// rea decompile_all
// name: System.Buffer$$BlockCopy
// address: 0x75e4380
// body: available
// range: 0x75e4380-0x75e4527 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75e4524 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Buffer__BlockCopy(long param_1,int param_2,long param_3,int param_4,int param_5)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_1 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar5 = thunk_FUN_03f9944c();
    puVar3 = &DAT_09223150;
  }
  else {
    if (param_3 != 0) {
      if (param_2 < 0) {
        thunk_FUN_03fc39d4(&DAT_09181558);
        uVar5 = thunk_FUN_03f9944c();
        puVar3 = (undefined8 *)&DAT_09223160;
      }
      else if (param_4 < 0) {
        thunk_FUN_03fc39d4(&DAT_09181558);
        uVar5 = thunk_FUN_03f9944c();
        puVar3 = (undefined8 *)&DAT_0921aa90;
      }
      else {
        if (-1 < param_5) {
          uVar2 = FUN_03f6c31c(param_1,param_2,param_3,param_4,param_5);
          if ((uVar2 & 1) != 0) {
            return;
          }
          iVar1 = System_Buffer__ByteLength(param_1);
          if ((param_2 <= iVar1 - param_5) &&
             (iVar1 = System_Buffer__ByteLength(param_3), param_4 <= iVar1 - param_5)) {
            return;
          }
          thunk_FUN_03fc39d4(&DAT_09181548);
          uVar5 = thunk_FUN_03f9944c();
          uVar6 = thunk_FUN_03fc39d4(&DAT_09209710);
          System_ArgumentException___ctor(uVar5,uVar6,0);
          goto LAB_075e4510;
        }
        thunk_FUN_03fc39d4(&DAT_09181558);
        uVar5 = thunk_FUN_03f9944c();
        puVar3 = &DAT_09219b28;
      }
      uVar6 = thunk_FUN_03fc39d4(puVar3);
      uVar4 = thunk_FUN_03fc39d4(&DAT_09208d80);
      System_ArgumentOutOfRangeException___ctor(uVar5,uVar6,uVar4,0);
      goto LAB_075e4510;
    }
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar5 = thunk_FUN_03f9944c();
    puVar3 = (undefined8 *)&DAT_0921aa88;
  }
  uVar6 = thunk_FUN_03fc39d4(puVar3);
  System_ArgumentNullException___ctor(uVar5,uVar6,0);
LAB_075e4510:
  uVar6 = thunk_FUN_03fc39d4(&DAT_091c4210);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar5,uVar6);
}

