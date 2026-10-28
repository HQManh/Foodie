// rea decompile_all
// name: System.Array$$System.Collections.IStructuralComparable.CompareTo
// address: 0x75da5a8
// body: available
// range: 0x75da5a8-0x75da77b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75da71c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75da778 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int System_Array__System_Collections_IStructuralComparable_CompareTo
              (undefined8 param_1,long *param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  
  if ((DAT_09521e9c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185800);
    DAT_09521e9c = 1;
  }
  if (param_2 == (long *)0x0) {
    return 1;
  }
  if ((*(byte *)(DAT_09535478 + 0x130) <= *(byte *)(*param_2 + 0x130)) &&
     (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_09535478 + 0x130) * 8 + -8) ==
      DAT_09535478)) {
    iVar1 = System_Array__get_Length(param_1);
    iVar2 = System_Array__get_Length(param_2);
    if (iVar1 == iVar2) {
      iVar1 = System_Array__get_Length(param_2);
      if (iVar1 < 1) {
        return 0;
      }
      iVar1 = 0;
      do {
        uVar4 = System_Array__GetValue(param_1,iVar1);
        uVar5 = System_Array__GetValue(param_2,iVar1);
        if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar8 = *param_3;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == DAT_09185800) {
              puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_075da6c4;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_03f95da8(param_3,DAT_09185800,0);
LAB_075da6c4:
        iVar2 = (*(code *)*puVar6)(param_3,uVar4,uVar5,puVar6[1]);
        iVar3 = System_Array__get_Length(param_2);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar1 = iVar1 + 1;
        if (iVar3 <= iVar1) {
          return 0;
        }
      } while( true );
    }
  }
  thunk_FUN_03fc39d4(&DAT_09181548);
  uVar4 = thunk_FUN_03f9944c();
  uVar5 = thunk_FUN_03fc39d4(&DAT_09209440);
  uVar7 = thunk_FUN_03fc39d4(&DAT_092207c8);
  System_ArgumentException___ctor(uVar4,uVar5,uVar7,0);
  uVar5 = thunk_FUN_03fc39d4(&DAT_091c08c0);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar4,uVar5);
}

