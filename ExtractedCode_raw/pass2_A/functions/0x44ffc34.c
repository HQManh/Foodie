// rea decompile_all
// name: Utilities.ObjectPoolDictArray$$GetLines
// address: 0x44ffc34
// body: available
// range: 0x44ffc34-0x44ffe0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44ffe08 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Utilities_ObjectPoolDictArray__GetLines
               (undefined8 param_1,long param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  
  if ((DAT_09518494 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091cd998);
    FUN_03f5c2a4(&DAT_091ae320);
    FUN_03f5c2a4(&DAT_091ae318);
    FUN_03f5c2a4(&DAT_091acd80);
    FUN_03f5c2a4(&DAT_091acd88);
    FUN_03f5c2a4(&DAT_0917c658);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09518494 = 1;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Equality(param_2,0,0);
  if ((uVar2 & 1) != 0) {
    return 0;
  }
  if (param_2 != 0) {
    uVar3 = UnityEngine_Component__get_gameObject(param_2,0);
    lVar4 = Utilities_ObjectPoolDictArray__GetGameObjects(param_1,uVar3,param_3,param_4 & 1);
    lVar5 = thunk_FUN_03f9944c(DAT_0917c658);
    FUN_057e0400(lVar5,DAT_091ae318);
    if (lVar4 != 0) {
      if (*(int *)(lVar4 + 0x18) < 1) {
        return lVar5;
      }
      iVar8 = 0;
      while ((lVar6 = FUN_057e0998(lVar4,iVar8,DAT_091acd88), lVar6 != 0 &&
             (uVar3 = FUN_04b7c324(lVar6,DAT_091cd998), lVar6 = DAT_091ae320, lVar5 != 0))) {
        lVar7 = *(long *)(lVar5 + 0x10);
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar7 == 0) break;
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
          thunk_FUN_03f5d7b8();
        }
        else {
          FUN_057e0c68(lVar5,uVar3,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70)
                      );
        }
        iVar8 = iVar8 + 1;
        if (*(int *)(lVar4 + 0x18) <= iVar8) {
          return lVar5;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

