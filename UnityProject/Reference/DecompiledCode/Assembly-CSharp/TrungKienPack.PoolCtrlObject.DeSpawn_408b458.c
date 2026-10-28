// rea decompile_all
// name: TrungKienPack.PoolCtrlObject$$DeSpawn
// address: 0x408b458
// body: available
// range: 0x408b458-0x408b6af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x408b6a8 to 0x866d8a0 UnityEngine.Transform$$SetParent (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x408b6ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void TrungKienPack_PoolCtrlObject__DeSpawn(long param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  
  if ((DAT_09515cd4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09186320);
    FUN_03f5c2a4(&DAT_091ad560);
    FUN_03f5c2a4(&DAT_091b8c38);
    DAT_09515cd4 = 1;
  }
  if (param_2 == (long *)0x0) {
    return;
  }
  lVar4 = *param_2;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == DAT_09186320) {
        puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_0408b4fc;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar1 = (undefined8 *)FUN_03f95da8(param_2,DAT_09186320,0);
LAB_0408b4fc:
  lVar4 = (*(code *)*puVar1)(param_2,puVar1[1]);
  if ((lVar4 != 0) && (lVar4 = UnityEngine_Component__get_gameObject(lVar4,0), lVar4 != 0)) {
    uVar5 = UnityEngine_GameObject__get_activeSelf(lVar4,0);
    if ((uVar5 & 1) == 0) {
      return;
    }
    uVar2 = System_Object__GetType(param_2,0);
    if (*(long *)(param_1 + 0x10) != 0) {
      uVar3 = System_Object__GetType(*(long *)(param_1 + 0x10),0);
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424(DAT_095354b8);
      }
      uVar5 = System_Type__op_Equality(uVar2,uVar3,0);
      if ((uVar5 & 1) == 0) {
        return;
      }
      if (*(long *)(param_1 + 0x20) != 0) {
        FUN_057e2274(*(long *)(param_1 + 0x20),param_2,DAT_091ad560);
        if (*(long *)(param_1 + 0x18) != 0) {
          FUN_05e2cfd8(*(long *)(param_1 + 0x18),param_2,DAT_091b8c38);
          lVar4 = *param_2;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == DAT_09186320) {
                puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
                goto LAB_0408b610;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar1 = (undefined8 *)FUN_03f95da8(param_2,DAT_09186320,0);
LAB_0408b610:
          lVar4 = (*(code *)*puVar1)(param_2,puVar1[1]);
          if ((lVar4 != 0) && (lVar4 = UnityEngine_Component__get_gameObject(lVar4,0), lVar4 != 0))
          {
            UnityEngine_GameObject__SetActive(lVar4,0,0);
            lVar4 = *param_2;
            uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar5 != 0) {
              piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == DAT_09186320) {
                  puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
                  goto LAB_0408b684;
                }
                uVar5 = uVar5 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar5 != 0);
            }
            puVar1 = (undefined8 *)FUN_03f95da8(param_2,DAT_09186320,0);
LAB_0408b684:
            lVar4 = (*(code *)*puVar1)(param_2,puVar1[1]);
            if (lVar4 != 0) {
              UnityEngine_Transform__SetParent(lVar4,0,0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

