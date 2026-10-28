// rea decompile_all
// name: Coffee.UIExtensions.UIParticleAttractor$$CollectUIParticlesIfNeeded
// address: 0x440335c
// body: available
// range: 0x440335c-0x440361b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4403618 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Coffee_UIExtensions_UIParticleAttractor__CollectUIParticlesIfNeeded(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  
  if ((DAT_09517e83 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5710);
    FUN_03f5c2a4(&DAT_091b15e0);
    FUN_03f5c2a4(&DAT_091aeeb0);
    FUN_03f5c2a4(&DAT_091b15f8);
    FUN_03f5c2a4(&DAT_091aeed8);
    FUN_03f5c2a4(&DAT_091aeee0);
    FUN_03f5c2a4(&DAT_091b1600);
    FUN_03f5c2a4(&DAT_091aeee8);
    FUN_03f5c2a4(&DAT_091b1610);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517e83 = 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    if (*(int *)(*(long *)(param_1 + 0x28) + 0x18) == 0) {
      return;
    }
    lVar5 = *(long *)(param_1 + 0x50);
    if (lVar5 != 0) {
      if (*(int *)(lVar5 + 0x18) != 0) {
        return;
      }
      iVar2 = FUN_057e07d0(lVar5,DAT_091b15f8);
      if (*(long *)(param_1 + 0x28) != 0) {
        iVar3 = FUN_057e07d0(*(long *)(param_1 + 0x28),DAT_091aeed8);
        if (iVar2 < iVar3) {
          if (*(long *)(param_1 + 0x28) == 0) goto LAB_04403618;
          lVar5 = *(long *)(param_1 + 0x50);
          uVar4 = FUN_057e07d0(*(long *)(param_1 + 0x28),DAT_091aeed8);
          if (lVar5 == 0) goto LAB_04403618;
          FUN_057e07e8(lVar5,uVar4,DAT_091b1610);
        }
        lVar5 = *(long *)(param_1 + 0x28);
        if (lVar5 != 0) {
          iVar2 = 0;
          do {
            if (*(int *)(lVar5 + 0x18) <= iVar2) {
              return;
            }
            lVar5 = FUN_057e0998(lVar5,iVar2,DAT_091aeee8);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09188ad0);
            }
            uVar6 = UnityEngine_Object__op_Equality(lVar5,0,0);
            lVar8 = DAT_091b15e0;
            if ((uVar6 & 1) == 0) {
              if (((lVar5 == 0) || (lVar8 = FUN_04a6a8a8(lVar5,1,DAT_091c5710), lVar8 == 0)) ||
                 (*(long *)(lVar8 + 0xf0) == 0)) break;
              lVar7 = *(long *)(param_1 + 0x50);
              uVar6 = FUN_057e1004(*(long *)(lVar8 + 0xf0),lVar5,DAT_091aeeb0);
              lVar5 = DAT_091b15e0;
              if ((uVar6 & 1) == 0) {
                lVar8 = 0;
              }
              if (lVar7 == 0) break;
              lVar10 = *(long *)(lVar7 + 0x10);
              *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
              if (lVar10 == 0) break;
              uVar1 = *(uint *)(lVar7 + 0x18);
              if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                plVar9 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                *plVar9 = lVar8;
                goto LAB_044035e4;
              }
              lVar5 = *(long *)(lVar5 + 0x20);
LAB_04403600:
              FUN_057e0c68(lVar7,lVar8,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x70));
            }
            else {
              lVar7 = *(long *)(param_1 + 0x50);
              if (lVar7 == 0) break;
              lVar5 = *(long *)(lVar7 + 0x10);
              *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
              if (lVar5 == 0) break;
              uVar1 = *(uint *)(lVar7 + 0x18);
              if (*(uint *)(lVar5 + 0x18) <= uVar1) {
                lVar5 = *(long *)(lVar8 + 0x20);
                lVar8 = 0;
                goto LAB_04403600;
              }
              lVar8 = 0;
              *(uint *)(lVar7 + 0x18) = uVar1 + 1;
              plVar9 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
              *plVar9 = 0;
LAB_044035e4:
              thunk_FUN_03f5d7b8(plVar9,lVar8);
            }
            lVar5 = *(long *)(param_1 + 0x28);
            iVar2 = iVar2 + 1;
          } while (lVar5 != 0);
        }
      }
    }
  }
LAB_04403618:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

