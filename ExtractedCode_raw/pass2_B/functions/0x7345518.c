// rea decompile_all
// name: Lean.Common.LeanScreenQuery$$ChangeLayers
// address: 0x7345518
// body: available
// range: 0x7345518-0x7345783 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7345780 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Lean_Common_LeanScreenQuery__ChangeLayers(long param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((DAT_095206de & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a93d8);
    FUN_03f5c2a4(&DAT_091876f8);
    FUN_03f5c2a4(&DAT_091aa590);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095206de = 1;
  }
  if (*(int *)(DAT_091876f8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (param_1 != 0) {
    lVar9 = *(long *)(*(long *)(DAT_091876f8 + 0xb8) + 0x28);
    uVar2 = UnityEngine_GameObject__get_layer(param_1,0);
    local_50 = 0;
    uStack_48 = 0;
    FUN_05614570(&local_50,param_1,uVar2,DAT_091a93d8);
    lVar5 = DAT_091aa590;
    if (lVar9 != 0) {
      lVar8 = *(long *)(lVar9 + 0x10);
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (lVar8 != 0) {
        uVar1 = *(uint *)(lVar9 + 0x18);
        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
          lVar8 = lVar8 + (long)(int)uVar1 * 0x10;
          *(uint *)(lVar9 + 0x18) = uVar1 + 1;
          puVar4 = (undefined8 *)(lVar8 + 0x20);
          *puVar4 = local_50;
          *(undefined8 *)(lVar8 + 0x28) = uStack_48;
          thunk_FUN_03f5d7b8(puVar4,0);
        }
        else {
          FUN_056655f0(lVar9,local_50,uStack_48,
                       *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
        UnityEngine_GameObject__set_layer(param_1,2,0);
        if ((param_2 & 1) != 0) {
          lVar5 = UnityEngine_GameObject__get_transform(param_1,0);
          if (lVar5 == 0) goto LAB_07345780;
          uVar6 = UnityEngine_Transform__GetParent(lVar5,0);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188ad0);
          }
          uVar7 = UnityEngine_Object__op_Inequality(uVar6,0,0);
          if ((uVar7 & 1) != 0) {
            lVar5 = UnityEngine_GameObject__get_transform(param_1,0);
            if ((lVar5 == 0) || (lVar5 = UnityEngine_Transform__GetParent(lVar5,0), lVar5 == 0))
            goto LAB_07345780;
            uVar6 = UnityEngine_Component__get_gameObject(lVar5,0);
            if (*(int *)(DAT_091876f8 + 0xe4) == 0) {
              FUN_03f5c424(DAT_091876f8);
            }
            Lean_Common_LeanScreenQuery__ChangeLayers(uVar6,1,0);
          }
        }
        if ((param_3 & 1) != 0) {
          lVar5 = UnityEngine_GameObject__get_transform(param_1,0);
          if (lVar5 == 0) goto LAB_07345780;
          iVar3 = UnityEngine_Transform__get_childCount(lVar5,0);
          if (-1 < iVar3 + -1) {
            do {
              lVar5 = UnityEngine_GameObject__get_transform(param_1,0);
              if (lVar5 == 0) goto LAB_07345780;
              iVar3 = iVar3 + -1;
              lVar5 = UnityEngine_Transform__GetChild(lVar5,iVar3,0);
              if (lVar5 == 0) goto LAB_07345780;
              uVar6 = UnityEngine_Component__get_gameObject(lVar5,0);
              if (*(int *)(DAT_091876f8 + 0xe4) == 0) {
                FUN_03f5c424(DAT_091876f8);
              }
              Lean_Common_LeanScreenQuery__ChangeLayers(uVar6,0,1);
            } while (0 < iVar3);
          }
        }
        return;
      }
    }
  }
LAB_07345780:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

