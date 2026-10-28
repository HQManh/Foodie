// rea decompile_all
// name: CookingGraph.CustomerOrderTranslator.<SplitDishes>d__12$$MoveNext
// address: 0x442a05c
// body: available
// range: 0x442a05c-0x442a21b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x442a1f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CookingGraph_CustomerOrderTranslator_<SplitDishes>d__12__MoveNext(long param_1)

{
  int iVar1;
  short sVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  int iVar8;
  
  if ((DAT_09517f65 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09211b50);
    FUN_03f5c2a4(&DAT_09211bb0);
    DAT_09517f65 = 1;
  }
  iVar8 = *(int *)(param_1 + 0x10);
  uVar3 = 0;
  if (iVar8 == 2) {
    uVar6 = 0xffffffff;
LAB_0442a180:
    *(undefined4 *)(param_1 + 0x10) = uVar6;
  }
  else {
    if (iVar8 == 1) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      iVar8 = *(int *)(param_1 + 0x4c) + 1;
      goto LAB_0442a130;
    }
    if (iVar8 == 0) {
      iVar5 = 0;
      iVar8 = 0;
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      *(undefined8 *)(param_1 + 0x48) = 0;
      iVar1 = 0;
      do {
        lVar4 = *(long *)(param_1 + 0x28);
        if (lVar4 == 0) {
LAB_0442a1f0:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(int *)(lVar4 + 0x10) <= iVar5) {
          if (iVar1 != 0) {
            do {
              puVar7 = &DAT_09211b50;
              uVar3 = *(undefined8 *)(param_1 + 0x38);
LAB_0442a204:
              CookingGraph_CustomerOrderTranslator__Fail(*puVar7,uVar3);
            } while( true );
          }
          uVar3 = System_String__Substring(lVar4,iVar8,0);
          *(undefined8 *)(param_1 + 0x18) = uVar3;
          thunk_FUN_03f5d7b8();
          uVar3 = 1;
          uVar6 = 2;
          goto LAB_0442a180;
        }
        sVar2 = System_String__get_Chars(lVar4,iVar5,0);
        if (sVar2 == 0x7b) {
          iVar5 = *(int *)(param_1 + 0x48) + 1;
LAB_0442a12c:
          *(int *)(param_1 + 0x48) = iVar5;
        }
        else {
          if (*(long *)(param_1 + 0x28) == 0) goto LAB_0442a1f0;
          sVar2 = System_String__get_Chars
                            (*(long *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x4c),0);
          if (sVar2 == 0x7d) {
            iVar5 = *(int *)(param_1 + 0x48) + -1;
            goto LAB_0442a12c;
          }
          if (*(long *)(param_1 + 0x28) == 0) goto LAB_0442a1f0;
          sVar2 = System_String__get_Chars
                            (*(long *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x4c),0);
          if ((sVar2 == 0x2c) && (*(int *)(param_1 + 0x48) == 0)) {
            if (*(long *)(param_1 + 0x28) != 0) {
              uVar3 = System_String__Substring
                                (*(long *)(param_1 + 0x28),iVar8,*(int *)(param_1 + 0x4c) - iVar8,0)
              ;
              *(undefined8 *)(param_1 + 0x18) = uVar3;
              thunk_FUN_03f5d7b8();
              uVar6 = 1;
              uVar3 = 1;
              goto LAB_0442a180;
            }
            goto LAB_0442a1f0;
          }
        }
LAB_0442a130:
        iVar1 = *(int *)(param_1 + 0x48);
        if (iVar1 < 0) {
          puVar7 = &DAT_09211bb0;
          uVar3 = *(undefined8 *)(param_1 + 0x38);
          goto LAB_0442a204;
        }
        iVar5 = *(int *)(param_1 + 0x4c) + 1;
        *(int *)(param_1 + 0x4c) = iVar5;
      } while( true );
    }
  }
  return uVar3;
}

