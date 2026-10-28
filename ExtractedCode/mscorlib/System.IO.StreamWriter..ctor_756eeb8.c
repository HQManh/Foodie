// rea decompile_all
// name: System.IO.StreamWriter$$.ctor
// address: 0x756eeb8
// body: available
// range: 0x756eeb8-0x756f103 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x756f01c to 0x756ecc0 System.IO.StreamWriter$$Init (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x756f100 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_IO_StreamWriter___ctor(long param_1,long param_2,ulong param_3,long param_4,int param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  if ((DAT_09521a2c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184580);
    FUN_03f5c2a4(&DAT_0918b8c8);
    FUN_03f5c2a4(&DAT_0918bbf0);
    DAT_09521a2c = 1;
  }
  if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_095175b2 == '\0') {
    FUN_03f5c2a4(&DAT_0918b8c8);
    DAT_095175b2 = '\x01';
  }
  if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(*(long *)(DAT_0918b8c8 + 0xb8) + 0x30);
  thunk_FUN_03f5d7b8();
  if (*(int *)(DAT_0918bbf0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_IO_TextWriter___ctor(param_1);
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar1 = thunk_FUN_03f9944c();
    puVar2 = &DAT_09220b48;
  }
  else {
    if (param_4 != 0) {
      if (*(int *)(param_2 + 0x10) == 0) {
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar1 = thunk_FUN_03f9944c();
        uVar3 = thunk_FUN_03fc39d4(&DAT_09201300);
        System_ArgumentException___ctor(uVar1,uVar3,0);
      }
      else {
        if (0 < param_5) {
          uVar5 = 6;
          if ((param_3 & 1) == 0) {
            uVar5 = 2;
          }
          uVar1 = thunk_FUN_03f9944c(DAT_09184580);
          System_IO_FileStream___ctor(uVar1,param_2,uVar5,2,1,0x1000,0,0x8000000);
          System_IO_StreamWriter__Init(param_1,uVar1,param_4,param_5,0);
          return;
        }
        thunk_FUN_03fc39d4(&DAT_09181558);
        uVar1 = thunk_FUN_03f9944c();
        uVar3 = thunk_FUN_03fc39d4(&DAT_092185f0);
        uVar4 = thunk_FUN_03fc39d4(&DAT_0920aaf0);
        System_ArgumentOutOfRangeException___ctor(uVar1,uVar3,uVar4,0);
      }
      goto LAB_0756f0ec;
    }
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar1 = thunk_FUN_03f9944c();
    puVar2 = &DAT_0921af60;
  }
  uVar3 = thunk_FUN_03fc39d4(puVar2);
  System_ArgumentNullException___ctor(uVar1,uVar3,0);
LAB_0756f0ec:
  uVar3 = thunk_FUN_03fc39d4(&DAT_091da160);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar1,uVar3);
}

