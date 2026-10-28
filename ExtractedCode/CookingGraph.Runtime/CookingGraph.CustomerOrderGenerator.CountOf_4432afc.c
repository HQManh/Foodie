// rea decompile_all
// name: CookingGraph.CustomerOrderGenerator$$CountOf
// address: 0x4432afc
// body: available
// range: 0x4432afc-0x4432d8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4432d88 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CustomerOrderGenerator__CountOf
               (long param_1,long *param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long local_58;
  
  if ((DAT_09517fa2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c9870);
    FUN_03f5c2a4(&DAT_091ca4c8);
    FUN_03f5c2a4(&DAT_091789b8);
    FUN_03f5c2a4(&DAT_09178de8);
    FUN_03f5c2a4(&DAT_0917b468);
    FUN_03f5c2a4(&DAT_091e8328);
    FUN_03f5c2a4(&DAT_091e83e8);
    FUN_03f5c2a4(&DAT_0918f988);
    FUN_03f5c2a4(&DAT_0918f930);
    FUN_03f5c2a4(&DAT_091f9400);
    DAT_09517fa2 = 1;
  }
  local_58 = 0;
  lVar1 = thunk_FUN_03f9944c(DAT_0918f988);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x10) = param_4;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x10),param_4);
    if (param_3 != 0) {
      uVar7 = *(undefined8 *)(param_3 + 0x18);
      if (*(int *)(DAT_0918f930 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = DAT_091f9400;
      puVar3 = *(undefined8 **)(DAT_0918f930 + 0xb8);
      lVar8 = puVar3[9];
      if (lVar8 == 0) {
        if (*(int *)(DAT_0918f930 + 0xe4) == 0) {
          FUN_03f5c424();
          puVar3 = *(undefined8 **)(DAT_0918f930 + 0xb8);
        }
        uVar9 = *puVar3;
        lVar8 = thunk_FUN_03f9944c(DAT_091789b8);
        FUN_05324070(lVar8,uVar9,DAT_091e8328,0);
        plVar2 = (long *)(*(long *)(DAT_0918f930 + 0xb8) + 0x48);
        *plVar2 = lVar8;
        thunk_FUN_03f5d7b8(plVar2,lVar8);
      }
      uVar7 = FUN_04af8044(uVar7,lVar8,DAT_091ca4c8);
      uVar7 = System_String__Join(uVar6,uVar7,0);
      if (param_2 != (long *)0x0) {
        lVar8 = *param_2;
        uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == DAT_0917b468) {
              puVar3 = (undefined8 *)(lVar8 + (long)(*piVar5 + 1) * 0x10 + 0x138);
              goto LAB_04432d00;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b468,1);
LAB_04432d00:
        uVar4 = (*(code *)*puVar3)(param_2,uVar7,&local_58,puVar3[1]);
        lVar8 = local_58;
        if ((uVar4 & 1) == 0) {
          lVar8 = param_1;
        }
        if (lVar8 != 0) {
          uVar6 = *(undefined8 *)(lVar8 + 0x28);
          uVar7 = thunk_FUN_03f9944c(DAT_09178de8);
          FUN_05322d94(uVar7,lVar1,DAT_091e83e8,0);
          FUN_04adc4d0(uVar6,uVar7,DAT_091c9870);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

