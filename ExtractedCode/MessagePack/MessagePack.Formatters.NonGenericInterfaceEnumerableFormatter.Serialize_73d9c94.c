// rea decompile_all
// name: MessagePack.Formatters.NonGenericInterfaceEnumerableFormatter$$Serialize
// address: 0x73d9c94
// body: available
// range: 0x73d9c94-0x73da15b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73d9e48 to 0x739f684 MessagePack.MessagePackWriter$$WriteNil (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73da124 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73da128 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73da13c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73da140 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73da144 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73da14c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73da154 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73da158 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x073da150) */
/* WARNING: Removing unreachable block (ram,0x073da094) */

void MessagePack_Formatters_NonGenericInterfaceEnumerableFormatter__Serialize
               (undefined8 param_1,long param_2,long *param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 local_170;
  long **pplStack_168;
  long *local_160;
  long local_110;
  undefined1 *local_108;
  undefined8 local_100;
  long **pplStack_f8;
  long *local_f0;
  long local_e8;
  undefined8 local_e0;
  long *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 local_70 [16];
  
  if ((DAT_09520d07 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_091ccf38);
    FUN_03f5c2a4(&DAT_09184938);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09185b08);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_0917b1e0);
    FUN_03f5c2a4(&DAT_091d4850);
    FUN_03f5c2a4(&DAT_091ba038);
    DAT_09520d07 = 1;
  }
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  local_e0 = 0;
  local_d8 = (long *)0x0;
  local_f0 = (long *)0x0;
  local_e8 = 0;
  local_100 = 0;
  pplStack_f8 = (long **)0x0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (param_3 == (long *)0x0) {
    MessagePack_MessagePackWriter__WriteNil(param_2,0);
    return;
  }
  if (param_4 != 0) {
    uVar8 = *(undefined8 *)(param_4 + 0x10);
    if (*(int *)(DAT_09184938 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar2 = (long *)FUN_04264fcc(uVar8,DAT_091ccf38);
    if (*(long *)(param_4 + 0x30) != 0) {
      local_70 = MessagePack_SequencePool__Rent(*(long *)(param_4 + 0x30),0);
      lVar4 = local_70._8_8_;
      local_108 = local_70;
      local_110 = 0;
      MessagePack_MessagePackWriter__Clone(&local_170,param_2,lVar4,0);
      memcpy(&local_d0,&local_170,0x60);
      lVar5 = *param_3;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_09185b08) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_073d9e58;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(param_3,DAT_09185b08,0);
LAB_073d9e58:
      local_d8 = (long *)(*(code *)*puVar3)(param_3,puVar3[1]);
      pplStack_168 = &local_d8;
      local_170 = 0;
      local_160 = &local_e8;
      iVar9 = 0;
      do {
        plVar1 = local_d8;
        if (local_d8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar5 = *local_d8;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_09185b10) {
              puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_073d9ef4;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(local_d8,DAT_09185b10,0);
LAB_073d9ef4:
        uVar6 = (*(code *)*puVar3)(plVar1,puVar3[1]);
        if ((uVar6 & 1) == 0) {
          plVar2 = (long *)thunk_FUN_03f99350(local_d8,DAT_09185a58);
          *local_160 = (long)plVar2;
          if (plVar2 == (long *)0x0) goto LAB_073da088;
          lVar5 = *plVar2;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 == 0) goto LAB_073da060;
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          goto LAB_073da048;
        }
        local_e0 = *(undefined8 *)(param_2 + 0x50);
        if (*(int *)(DAT_09182348 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        System_Threading_CancellationToken__ThrowIfCancellationRequested(&local_e0,0);
        plVar1 = local_d8;
        if (iVar9 == 0x7fffffff) {
          uVar8 = FUN_03f5c560();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar8,DAT_091d4850);
        }
        iVar9 = iVar9 + 1;
        if (local_d8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar5 = *local_d8;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_09185b10) {
              puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
              goto LAB_073d9f8c;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(local_d8,DAT_09185b10,1);
LAB_073d9f8c:
        uVar8 = (*(code *)*puVar3)(plVar1,puVar3[1]);
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar5 = *plVar2;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_0917b1e0) {
              puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_073d9fec;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917b1e0,0);
LAB_073d9fec:
        (*(code *)*puVar3)(plVar2,&local_d0,uVar8,param_4,puVar3[1]);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_073da048:
    if (*(long *)(piVar7 + -2) == DAT_09185a58) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_073da07c;
    }
  }
LAB_073da060:
  puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185a58,0);
LAB_073da07c:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
LAB_073da088:
  MessagePack_MessagePackWriter__Flush(&local_d0,0);
  MessagePack_MessagePackWriter__WriteArrayHeader(param_2,iVar9,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_060c8e44(&local_170,lVar4,DAT_091ba038);
  pplStack_f8 = pplStack_168;
  local_100 = local_170;
  local_f0 = local_160;
  MessagePack_MessagePackWriter__WriteRaw(param_2,&local_100,0);
  lVar4 = local_110;
  MessagePack_SequencePool_Rental__Dispose(local_108,0);
  if (lVar4 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c548(lVar4);
}

