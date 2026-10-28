// rea decompile_all
// name: CookingGraph.CompositeStructureTranslator$$FindMatches
// address: 0x441f6f4
// body: available
// range: 0x441f6f4-0x441fa0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x441fa08 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CompositeStructureTranslator__FindMatches
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,long *param_4,
               undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long *local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  
  if ((DAT_09517f35 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ca160);
    FUN_03f5c2a4(&DAT_091ca7e0);
    FUN_03f5c2a4(&DAT_091cad10);
    FUN_03f5c2a4(&DAT_091cae30);
    FUN_03f5c2a4(&DAT_09179300);
    FUN_03f5c2a4(&DAT_0917b358);
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_091b2298);
    FUN_03f5c2a4(&DAT_091e6740);
    FUN_03f5c2a4(&DAT_0918ecb8);
    DAT_09517f35 = 1;
  }
  local_60[0] = 0;
  uStack_98 = 0;
  local_a0 = (long *)0x0;
  local_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  local_68 = 0;
  local_70 = 0;
  uStack_a8 = 0;
  local_b0 = param_5;
  thunk_FUN_03f5d7b8(&local_b0,param_5);
  uStack_a8 = CONCAT44(uStack_a8._4_4_,param_7);
  local_a0 = param_4;
  thunk_FUN_03f5d7b8(&local_a0,param_4);
  uStack_98 = param_2;
  thunk_FUN_03f5d7b8(&uStack_98,param_2);
  uStack_78 = param_1;
  thunk_FUN_03f5d7b8(&uStack_78,param_1);
  local_70 = CONCAT44(local_70._4_4_,param_3);
  local_68 = param_6;
  thunk_FUN_03f5d7b8(&local_68,param_6);
  local_90 = CookingGraph_CompositeStructureTranslator__SlotsOf(uStack_78,uStack_98);
  thunk_FUN_03f5d7b8(&local_90,local_90);
  plVar4 = local_a0;
  if (local_90 != 0) {
    if (*(int *)(local_90 + 0x18) == 0) {
      return;
    }
    if (local_a0 != (long *)0x0) {
      lVar5 = *local_a0;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_0917b358) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0441f8bc;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(local_a0,DAT_0917b358,0);
LAB_0441f8bc:
      uVar1 = (*(code *)*puVar2)(plVar4,puVar2[1]);
      uVar3 = FUN_04aeb3f8(0xffffffff,uVar1,DAT_091ca160);
      local_88 = FUN_04b0462c(uVar3,DAT_091cae30);
      thunk_FUN_03f5d7b8(&local_88,local_88);
      if (local_90 != 0) {
        local_80 = FUN_03f5c394(DAT_091801b8,*(undefined4 *)(local_90 + 0x18));
        thunk_FUN_03f5d7b8(&local_80,local_80);
        lVar5 = local_90;
        if (*(int *)(DAT_0918ecb8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar2 = *(undefined8 **)(DAT_0918ecb8 + 0xb8);
        lVar8 = puVar2[3];
        if (lVar8 == 0) {
          if (*(int *)(DAT_0918ecb8 + 0xe4) == 0) {
            FUN_03f5c424();
            puVar2 = *(undefined8 **)(DAT_0918ecb8 + 0xb8);
          }
          uVar3 = *puVar2;
          lVar8 = thunk_FUN_03f9944c(DAT_09179300);
          FUN_05324070(lVar8,uVar3,DAT_091e6740,0);
          plVar4 = (long *)(*(long *)(DAT_0918ecb8 + 0xb8) + 0x18);
          *plVar4 = lVar8;
          thunk_FUN_03f5d7b8(plVar4,lVar8);
        }
        uVar3 = FUN_04af8044(lVar5,lVar8,DAT_091ca7e0);
        local_60[0] = FUN_04b049e4(uVar3,DAT_091cad10);
        thunk_FUN_03f5d7b8(local_60,local_60[0]);
        CookingGraph_CompositeStructureTranslator__<FindMatches>g__Search_5_1(0,&local_b0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

