// rea decompile_all
// name: System.String$$IndexOfAny
// address: 0x7434fe8
// body: available
// range: 0x7434fe8-0x74351b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7435038 to 0x74351c0 System.String$$IndexOfAny (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74350b8 to 0x7434f04 System.String$$IndexOf (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74350d4 to 0x74352b0 System.String$$IndexOfCharArray (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74351ac to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74351b0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_String__IndexOfAny(long param_1,long param_2,uint param_3,uint param_4)

{
  short sVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  int iVar7;
  
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar2 = thunk_FUN_03f9944c();
    uVar3 = thunk_FUN_03fc39d4(&DAT_09217718);
    System_ArgumentNullException___ctor(uVar2,uVar3,0);
  }
  else {
    uVar6 = (ulong)param_3;
    if (*(uint *)(param_1 + 0x10) < param_3) {
      thunk_FUN_03fc39d4(&DAT_09181558);
      uVar2 = thunk_FUN_03f9944c();
      uVar3 = thunk_FUN_03fc39d4(&DAT_09223268);
      puVar4 = &DAT_092049a8;
    }
    else {
      if (param_4 <= *(uint *)(param_1 + 0x10) - param_3) {
        iVar7 = (int)*(ulong *)(param_2 + 0x18);
        if (iVar7 == 3) {
          if (0 < (int)param_4) {
            uVar6 = -(ulong)(param_3 >> 0x1f) & 0xfffffffe00000000 | uVar6 << 1;
            iVar7 = param_4 + 1;
            do {
              sVar1 = *(short *)(param_1 + 0x14 + uVar6);
              if (((sVar1 == *(short *)(param_2 + 0x24)) || (sVar1 == *(short *)(param_2 + 0x20)))
                 || (sVar1 == *(short *)(param_2 + 0x22))) {
                if ((long)uVar6 < 0) {
                  uVar6 = uVar6 + 1;
                }
                return uVar6 >> 1;
              }
              iVar7 = iVar7 + -1;
              uVar6 = uVar6 + 2;
            } while (1 < iVar7);
          }
        }
        else {
          if (iVar7 == 2) {
            uVar6 = System_String__IndexOfAny
                              (param_1,*(undefined2 *)(param_2 + 0x20),
                               *(undefined2 *)(param_2 + 0x22));
            return uVar6;
          }
          if (3 < iVar7) {
            uVar6 = System_String__IndexOfCharArray(param_1,param_2,uVar6,param_4);
            return uVar6;
          }
          if ((*(ulong *)(param_2 + 0x18) & 0xffffffff) == 1) {
            if (iVar7 != 0) {
              uVar6 = System_String__IndexOf(param_1,*(undefined2 *)(param_2 + 0x20),uVar6,param_4);
              return uVar6;
            }
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
        }
        return 0xffffffff;
      }
      thunk_FUN_03fc39d4(&DAT_09181558);
      uVar2 = thunk_FUN_03f9944c();
      uVar3 = thunk_FUN_03fc39d4(&DAT_09219b28);
      puVar4 = &DAT_091ff7b0;
    }
    uVar5 = thunk_FUN_03fc39d4(puVar4);
    System_ArgumentOutOfRangeException___ctor(uVar2,uVar3,uVar5,0);
  }
  uVar3 = thunk_FUN_03fc39d4(&DAT_091da2f0);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar2,uVar3);
}

