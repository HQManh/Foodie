// rea decompile_all
// name: System.Array$$IndexOf
// address: 0x75db7dc
// body: available
// range: 0x75db7dc-0x75dba7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75db98c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75dba7c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_Array__IndexOf(long param_1,long param_2,ulong param_3,int param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  uint uVar11;
  ulong uVar13;
  long lVar14;
  ulong uVar12;
  
  uVar12 = param_3 & 0xffffffff;
  uVar11 = (uint)param_3;
  if ((DAT_09521ea1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180318);
    DAT_09521ea1 = 1;
  }
  if (param_1 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar7 = thunk_FUN_03f9944c();
    uVar8 = thunk_FUN_03fc39d4(&DAT_092179d0);
    System_ArgumentNullException___ctor(uVar7,uVar8,0);
  }
  else {
    iVar1 = FUN_03f6b444(param_1);
    if (iVar1 == 1) {
      iVar1 = FUN_03f6b404(param_1,0);
      if ((iVar1 - uVar11 == 0 || iVar1 < (int)uVar11) &&
         (iVar2 = System_Array__get_Length(param_1), (int)uVar11 <= iVar2 + iVar1)) {
        if ((-1 < param_4) &&
           (iVar2 = System_Array__get_Length(param_1), param_4 <= (int)((iVar1 - uVar11) + iVar2)))
        {
          lVar3 = thunk_FUN_03f99350(param_1,DAT_09180318);
          iVar2 = param_4 + uVar11;
          if (lVar3 == 0) {
            uVar13 = uVar12;
            if ((int)uVar11 < iVar2) {
              do {
                plVar6 = (long *)System_Array__GetValue(param_1,uVar13);
                if (plVar6 == (long *)0x0) {
                  if (param_2 == 0) goto LAB_075db970;
                }
                else {
                  uVar12 = (**(code **)(*plVar6 + 0x138))
                                     (plVar6,param_2,*(undefined8 *)(*plVar6 + 0x140));
                  if ((uVar12 & 1) != 0) goto LAB_075db970;
                }
                param_4 = param_4 + -1;
                uVar13 = (ulong)((int)uVar13 + 1);
              } while (param_4 != 0);
            }
          }
          else if (param_2 == 0) {
            if ((int)uVar11 < iVar2) {
              uVar13 = (ulong)(int)uVar11;
              if (uVar12 <= *(uint *)(lVar3 + 0x18)) {
                uVar11 = *(uint *)(lVar3 + 0x18);
              }
              do {
                if (uVar11 == (uint)uVar13) goto LAB_075db98c;
                if (*(long *)(lVar3 + 0x20 + uVar13 * 8) == 0) goto LAB_075db970;
                param_4 = param_4 + -1;
                uVar13 = uVar13 + 1;
              } while (param_4 != 0);
            }
          }
          else if ((int)uVar11 < iVar2) {
            lVar14 = (long)iVar2 - (long)(int)uVar11;
            plVar6 = (long *)(lVar3 + (long)(int)uVar11 * 8 + 0x20);
            do {
              if (*(uint *)(lVar3 + 0x18) <= (uint)uVar12) {
LAB_075db98c:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              plVar4 = (long *)*plVar6;
              if ((plVar4 != (long *)0x0) &&
                 (uVar5 = (**(code **)(*plVar4 + 0x138))
                                    (plVar4,param_2,*(undefined8 *)(*plVar4 + 0x140)),
                 uVar13 = uVar12, (uVar5 & 1) != 0)) goto LAB_075db970;
              lVar14 = lVar14 + -1;
              plVar6 = plVar6 + 1;
              uVar12 = (ulong)((uint)uVar12 + 1);
            } while (lVar14 != 0);
          }
          uVar13 = (ulong)(iVar1 - 1);
LAB_075db970:
          return uVar13 & 0xffffffff;
        }
        thunk_FUN_03fc39d4(&DAT_09181558);
        uVar7 = thunk_FUN_03f9944c();
        uVar8 = thunk_FUN_03fc39d4(&DAT_09219b28);
        puVar9 = &DAT_091ff7b0;
      }
      else {
        thunk_FUN_03fc39d4(&DAT_09181558);
        uVar7 = thunk_FUN_03f9944c();
        uVar8 = thunk_FUN_03fc39d4(&DAT_09223268);
        puVar9 = &DAT_092049a8;
      }
      uVar10 = thunk_FUN_03fc39d4(puVar9);
      System_ArgumentOutOfRangeException___ctor(uVar7,uVar8,uVar10,0);
    }
    else {
      thunk_FUN_03fc39d4(&DAT_09189ad8);
      uVar7 = thunk_FUN_03f9944c();
      uVar8 = thunk_FUN_03fc39d4(&DAT_09209d50);
      System_RankException___ctor(uVar7,uVar8);
    }
  }
  uVar8 = thunk_FUN_03fc39d4(&DAT_091c0810);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar7,uVar8);
}

