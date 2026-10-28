// rea decompile_all
// name: Utilities.ObjectPoolDictArray.<<GetGameObjectsIterate>g__IESpawnGameObjectIterate|31_0>d$$MoveNext
// address: 0x4501c2c
// body: available
// range: 0x4501c2c-0x4501eb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4501eb0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Utilities_ObjectPoolDictArray_<<GetGameObjectsIterate>g__IESpawnGameObjectIterate_31_0>d__MoveNext
          (long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  
  if ((DAT_095184a5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091acd50);
    FUN_03f5c2a4(&DAT_091acd78);
    FUN_03f5c2a4(&DAT_091acd80);
    FUN_03f5c2a4(&DAT_091acd90);
    FUN_03f5c2a4(&DAT_091d4bc0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095184a5 = 1;
  }
  lVar10 = *(long *)(param_1 + 0x38);
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    goto LAB_04501d44;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    return 0;
  }
  lVar11 = *(long *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if (lVar11 != 0) {
    iVar4 = FUN_057e07d0(lVar11,DAT_091acd78);
    if (*(long *)(param_1 + 0x20) != 0) {
      iVar1 = *(int *)(param_1 + 0x28) + *(int *)(*(long *)(param_1 + 0x20) + 0x18);
      if (iVar4 <= iVar1) {
        iVar4 = iVar1;
      }
      FUN_057e07e8(lVar11,iVar4,DAT_091acd90);
      iVar4 = 0;
      *(undefined4 *)(param_1 + 0x70) = 0;
      while( true ) {
        if (*(int *)(param_1 + 0x28) <= iVar4) {
          lVar10 = *(long *)(param_1 + 0x68);
          if (lVar10 == 0) {
            return 0;
          }
          (**(code **)(lVar10 + 0x18))
                    (*(undefined8 *)(lVar10 + 0x40),*(undefined8 *)(lVar10 + 0x28));
          return 0;
        }
        iVar1 = *(int *)(param_1 + 0x2c);
        iVar3 = 0;
        if (iVar1 != 0) {
          iVar3 = iVar4 / iVar1;
        }
        if (iVar4 == iVar3 * iVar1) {
          *(undefined8 *)(param_1 + 0x18) = 0;
          thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
          *(undefined4 *)(param_1 + 0x10) = 1;
          return 1;
        }
LAB_04501d44:
        if (lVar10 == 0) break;
        uVar12 = *(undefined8 *)(param_1 + 0x30);
        uVar5 = UnityEngine_Component__get_transform(lVar10,0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188ad0);
        }
        lVar11 = FUN_04c35338(uVar12,uVar5,DAT_091d4bc0);
        if ((lVar11 == 0) || (lVar6 = UnityEngine_GameObject__get_transform(lVar11,0), lVar6 == 0))
        break;
        UnityEngine_Transform__set_position
                  (*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),
                   *(undefined4 *)(param_1 + 0x48),lVar6,0);
        UnityEngine_Transform__set_rotation
                  (*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),
                   *(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),lVar6,0);
        lVar6 = DAT_091acd50;
        lVar7 = *(long *)(param_1 + 0x20);
        if (lVar7 == 0) break;
        lVar8 = *(long *)(lVar7 + 0x10);
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar8 == 0) break;
        uVar2 = *(uint *)(lVar7 + 0x18);
        if (uVar2 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar2 + 1;
          plVar9 = (long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
          *plVar9 = lVar11;
          thunk_FUN_03f5d7b8(plVar9,lVar11);
        }
        else {
          FUN_057e0c68(lVar7,lVar11,
                       *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        }
        UnityEngine_GameObject__SetActive(lVar11,1,0);
        lVar6 = *(long *)(param_1 + 0x60);
        if (lVar6 != 0) {
          (**(code **)(lVar6 + 0x18))
                    (*(undefined8 *)(lVar6 + 0x40),lVar11,*(undefined8 *)(lVar6 + 0x28));
        }
        iVar4 = *(int *)(param_1 + 0x70) + 1;
        *(int *)(param_1 + 0x70) = iVar4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

