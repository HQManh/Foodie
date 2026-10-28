// rea decompile_all
// name: Utilities.ObjectPoolDictArray$$GetActiveObjects
// address: 0x450149c
// body: available
// range: 0x450149c-0x450172f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x450172c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Utilities_ObjectPoolDictArray__GetActiveObjects(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  
  if ((DAT_0951849e & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919d210);
    FUN_03f5c2a4(&DAT_0919d220);
    FUN_03f5c2a4(&DAT_091acd50);
    FUN_03f5c2a4(&DAT_091adcb0);
    FUN_03f5c2a4(&DAT_091acd68);
    FUN_03f5c2a4(&DAT_091acd38);
    FUN_03f5c2a4(&DAT_091acd80);
    FUN_03f5c2a4(&DAT_091acd88);
    FUN_03f5c2a4(&DAT_0917c1f0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951849e = 1;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = UnityEngine_Object__op_Equality(param_2,0,0);
  if ((uVar4 & 1) != 0) {
    return 0;
  }
  if (param_2 != 0) {
    uVar3 = UnityEngine_Object__GetInstanceID(param_2,0);
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar4 = FUN_05797528(*(long *)(param_1 + 0x20),uVar3,DAT_091adcb0);
      if ((uVar4 & 1) == 0) {
        if (*(long *)(param_1 + 0x28) == 0) goto LAB_0450172c;
        uVar4 = FUN_06ef0700(*(long *)(param_1 + 0x28),uVar3,DAT_0919d210);
        if ((uVar4 & 1) == 0) {
          return 0;
        }
      }
      lVar5 = thunk_FUN_03f9944c(DAT_0917c1f0);
      FUN_057e0400(lVar5,DAT_091acd38);
      if ((*(long *)(param_1 + 0x28) != 0) &&
         (lVar6 = FUN_06ef046c(*(long *)(param_1 + 0x28),uVar3,DAT_0919d220), lVar6 != 0)) {
        iVar10 = *(int *)(lVar6 + 0x18);
        if (iVar10 + -1 < 0) {
          return lVar5;
        }
        do {
          iVar10 = iVar10 + -1;
          lVar7 = FUN_057e0998(lVar6,iVar10,DAT_091acd88);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188ad0);
          }
          uVar4 = UnityEngine_Object__op_Equality(lVar7,0,0);
          if ((uVar4 & 1) == 0) {
            if (lVar7 == 0) break;
            uVar4 = UnityEngine_GameObject__get_activeSelf(lVar7,0);
            lVar2 = DAT_091acd50;
            if ((uVar4 & 1) != 0) {
              if (lVar5 == 0) break;
              lVar9 = *(long *)(lVar5 + 0x10);
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
              if (lVar9 == 0) break;
              uVar1 = *(uint *)(lVar5 + 0x18);
              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                plVar8 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                *plVar8 = lVar7;
                thunk_FUN_03f5d7b8(plVar8,lVar7);
              }
              else {
                FUN_057e0c68(lVar5,lVar7,
                             *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
          else {
            FUN_057e2274(lVar6,lVar7,DAT_091acd68);
          }
          if (iVar10 < 1) {
            return lVar5;
          }
        } while( true );
      }
    }
  }
LAB_0450172c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

