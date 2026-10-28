// rea decompile_all
// name: System.Array$$LastIndexOf
// address: 0x75dbba4
// body: available
// range: 0x75dbba4-0x75dbe43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75dbd20 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75dbe10 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_Array__LastIndexOf(long param_1,long param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  
  uVar10 = (ulong)param_3;
  if ((DAT_09521ea2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180318);
    DAT_09521ea2 = 1;
  }
  if (param_1 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar8 = thunk_FUN_03f9944c();
    uVar9 = thunk_FUN_03fc39d4(&DAT_092179d0);
    System_ArgumentNullException___ctor(uVar8,uVar9,0);
  }
  else {
    iVar2 = System_Array__get_Length(param_1);
    if (iVar2 == 0) {
LAB_075dbd00:
      uVar10 = 0xffffffff;
LAB_075dbd04:
      return uVar10 & 0xffffffff;
    }
    if (((int)param_3 < 0) || (iVar2 = System_Array__get_Length(param_1), iVar2 <= (int)param_3)) {
      thunk_FUN_03fc39d4(&DAT_09181558);
      uVar8 = thunk_FUN_03f9944c();
      uVar9 = thunk_FUN_03fc39d4(&DAT_09223268);
      puVar6 = &DAT_092049a8;
    }
    else if ((int)param_4 < 0) {
      thunk_FUN_03fc39d4(&DAT_09181558);
      uVar8 = thunk_FUN_03f9944c();
      uVar9 = thunk_FUN_03fc39d4(&DAT_09219b28);
      puVar6 = &DAT_091ff7b0;
    }
    else {
      if (param_4 <= param_3 + 1) {
        iVar2 = FUN_03f6b444(param_1);
        if (iVar2 != 1) {
          thunk_FUN_03fc39d4(&DAT_09189ad8);
          uVar8 = thunk_FUN_03f9944c();
          uVar9 = thunk_FUN_03fc39d4(&DAT_09209d50);
          System_RankException___ctor(uVar8,uVar9);
          goto LAB_075dbdfc;
        }
        lVar3 = thunk_FUN_03f99350(param_1,DAT_09180318);
        iVar2 = param_3 - param_4;
        if (lVar3 == 0) {
          if (param_4 != 0) {
            do {
              plVar4 = (long *)System_Array__GetValue(param_1,uVar10);
              if (plVar4 == (long *)0x0) {
                if (param_2 == 0) goto LAB_075dbd04;
              }
              else {
                uVar5 = (**(code **)(*plVar4 + 0x138))
                                  (plVar4,param_2,*(undefined8 *)(*plVar4 + 0x140));
                if ((uVar5 & 1) != 0) goto LAB_075dbd04;
              }
              uVar1 = (int)uVar10 - 1;
              uVar10 = (ulong)uVar1;
            } while (iVar2 < (int)uVar1);
          }
        }
        else if (param_2 == 0) {
          if (param_4 != 0) {
            uVar10 = (ulong)(int)param_3;
            do {
              if (*(uint *)(lVar3 + 0x18) <= (uint)uVar10) goto LAB_075dbd20;
              if (*(long *)(lVar3 + 0x20 + uVar10 * 8) == 0) goto LAB_075dbd04;
              uVar10 = uVar10 - 1;
            } while (iVar2 < (int)uVar10);
          }
        }
        else if (param_4 != 0) {
          do {
            if (*(uint *)(lVar3 + 0x18) <= (uint)uVar10) {
LAB_075dbd20:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            plVar4 = *(long **)(lVar3 + 0x20 + uVar10 * 8);
            if ((plVar4 != (long *)0x0) &&
               (uVar5 = (**(code **)(*plVar4 + 0x138))
                                  (plVar4,param_2,*(undefined8 *)(*plVar4 + 0x140)),
               (uVar5 & 1) != 0)) goto LAB_075dbd04;
            uVar10 = uVar10 - 1;
          } while ((long)iVar2 < (long)uVar10);
        }
        goto LAB_075dbd00;
      }
      thunk_FUN_03fc39d4(&DAT_09181558);
      uVar8 = thunk_FUN_03f9944c();
      uVar9 = thunk_FUN_03fc39d4(&DAT_0921af80);
      puVar6 = &DAT_0921af88;
    }
    uVar7 = thunk_FUN_03fc39d4(puVar6);
    System_ArgumentOutOfRangeException___ctor(uVar8,uVar9,uVar7,0);
  }
LAB_075dbdfc:
  uVar9 = thunk_FUN_03fc39d4(&DAT_091c0838);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar8,uVar9);
}

