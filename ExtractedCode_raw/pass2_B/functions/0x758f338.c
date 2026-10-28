// rea decompile_all
// name: System.IO.UnexceptionalStreamReader$$Read
// address: 0x758f338
// body: available
// range: 0x758f338-0x758f533 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x758f44c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x758f530 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int System_IO_UnexceptionalStreamReader__Read
              (undefined8 param_1,long param_2,int param_3,int param_4)

{
  int iVar1;
  ushort uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  
  if ((DAT_09521b59 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918c5f8);
    DAT_09521b59 = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar6 = thunk_FUN_03f9944c();
    uVar7 = thunk_FUN_03fc39d4(&DAT_0921a5b8);
    System_ArgumentNullException___ctor(uVar6,uVar7,0);
  }
  else {
    if (param_3 < 0) {
      thunk_FUN_03fc39d4(&DAT_09181558);
      uVar6 = thunk_FUN_03f9944c();
      puVar4 = &DAT_0921d350;
    }
    else {
      if (-1 < param_4) {
        if (param_3 <= *(int *)(param_2 + 0x18) - param_4) {
          if (*(int *)(DAT_0918c5f8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (param_4 == 0) {
            param_4 = 0;
          }
          else {
            uVar2 = *(ushort *)(*(long *)(DAT_0918c5f8 + 0xb8) + 8);
            iVar8 = 0;
            do {
              uVar3 = System_IO_StreamReader__Read(param_1,0);
              if ((int)(uint)uVar3 < 0) {
                return iVar8;
              }
              iVar1 = iVar8 + 1;
              if (*(uint *)(param_2 + 0x18) <= (uint)(param_3 + iVar8)) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              *(short *)(param_2 + (long)(param_3 + iVar8) * 2 + 0x20) = (short)uVar3;
              uVar9 = (uint)uVar2;
              if (uVar9 == 0) {
                uVar3 = System_IO_UnexceptionalStreamReader__CheckEOL(uVar3,uVar3 & 0xffffffff);
                if ((uVar3 & 1) != 0) {
                  return iVar1;
                }
              }
              else if (uVar9 == ((uint)uVar3 & 0xffff)) {
                return iVar8 + 1;
              }
              iVar8 = iVar1;
            } while (param_4 != iVar1);
          }
          return param_4;
        }
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar6 = thunk_FUN_03f9944c();
        uVar7 = thunk_FUN_03fc39d4(&DAT_0921d360);
        System_ArgumentException___ctor(uVar6,uVar7,0);
        goto LAB_0758f51c;
      }
      thunk_FUN_03fc39d4(&DAT_09181558);
      uVar6 = thunk_FUN_03f9944c();
      puVar4 = &DAT_09219b28;
    }
    uVar7 = thunk_FUN_03fc39d4(puVar4);
    uVar5 = thunk_FUN_03fc39d4(&DAT_091fa160);
    System_ArgumentOutOfRangeException___ctor(uVar6,uVar7,uVar5,0);
  }
LAB_0758f51c:
  uVar7 = thunk_FUN_03fc39d4(&DAT_091dda90);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar6,uVar7);
}

