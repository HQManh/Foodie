// rea decompile_all
// name: System.Threading.ExecutionContext$$SetLocalValue
// address: 0x7622274
// body: available
// range: 0x7622274-0x762255f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x762255c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Threading_ExecutionContext__SetLocalValue(long *param_1,long param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  long lVar8;
  long local_48;
  
  if ((DAT_0952213d & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919cdb8);
    FUN_03f5c2a4(&DAT_0919cdb0);
    FUN_03f5c2a4(&DAT_0919cda8);
    FUN_03f5c2a4(&DAT_0919cdc0);
    FUN_03f5c2a4(&DAT_09176218);
    FUN_03f5c2a4(&DAT_091853f0);
    FUN_03f5c2a4(&DAT_091ad050);
    FUN_03f5c2a4(&DAT_091ad040);
    FUN_03f5c2a4(&DAT_091ad048);
    FUN_03f5c2a4(&DAT_0917c298);
    DAT_0952213d = 1;
  }
  local_48 = 0;
  lVar2 = System_Threading_Thread__get_CurrentThread(0);
  if (lVar2 != 0) {
    lVar2 = System_Threading_Thread__GetMutableExecutionContext(lVar2,0);
    local_48 = 0;
    if (lVar2 != 0) {
      plVar7 = (long *)(lVar2 + 0x38);
      if (*plVar7 == 0) {
        uVar1 = 1;
      }
      else {
        uVar1 = FUN_06fd9fbc(*plVar7,param_1,&local_48,DAT_0919cdb8);
        uVar1 = uVar1 ^ 1;
      }
      if (local_48 != param_2) {
        lVar8 = *plVar7;
        lVar3 = thunk_FUN_03f9944c(DAT_09176218);
        if (lVar8 == 0) {
          FUN_06fd76bc(lVar3,DAT_0919cda8);
        }
        else {
          FUN_06fd7798(lVar3,lVar8,DAT_0919cdb0);
        }
        *plVar7 = lVar3;
        thunk_FUN_03f5d7b8(plVar7,lVar3);
        if (*plVar7 == 0) goto LAB_0762255c;
        FUN_06fd8440(*plVar7,param_1,param_2,DAT_0919cdc0);
        if ((param_3 & 1) == 0) {
          return;
        }
        if ((uVar1 & 1) != 0) {
          plVar7 = (long *)(lVar2 + 0x40);
          lVar3 = *plVar7;
          lVar2 = thunk_FUN_03f9944c(DAT_0917c298);
          if (lVar3 == 0) {
            FUN_057e0400(lVar2,DAT_091ad040);
          }
          else {
            FUN_057e053c(lVar2,lVar3,DAT_091ad048);
          }
          *plVar7 = lVar2;
          thunk_FUN_03f5d7b8(plVar7,lVar2);
          lVar2 = DAT_091ad050;
          lVar3 = *plVar7;
          if (lVar3 == 0) goto LAB_0762255c;
          lVar8 = *(long *)(lVar3 + 0x10);
          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
          if (lVar8 == 0) goto LAB_0762255c;
          uVar1 = *(uint *)(lVar3 + 0x18);
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar3 + 0x18) = uVar1 + 1;
            plVar7 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
            *plVar7 = (long)param_1;
            thunk_FUN_03f5d7b8(plVar7,param_1);
          }
          else {
            FUN_057e0c68(lVar3,param_1,
                         *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
        }
        lVar2 = local_48;
        if (param_1 == (long *)0x0) goto LAB_0762255c;
        lVar3 = *param_1;
        uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == DAT_091853f0) {
              puVar4 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_0762252c;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(param_1,DAT_091853f0,0);
LAB_0762252c:
        (*(code *)*puVar4)(param_1,lVar2,param_2,0,puVar4[1]);
      }
      return;
    }
  }
LAB_0762255c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

